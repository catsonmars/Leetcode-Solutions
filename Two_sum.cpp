class Solution
{
    public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {        
      int diff = 0;  //diff is used to find the other number that would give the sum of the target
                     //for example  target - num[i]  9 -2 = 7 means that if there is a 7 at another element the target can be found
	vector<int> indices;
	map<int, int> Mapu;   //Mapu maps the value of element to an index. 
	
	
	for (int i = 0; i < nums.size(); i++)
	{
		Mapu[nums[i]] = i;                  //first element in map is the element at position i. The second is the index i
	}
	
	for (int i = 0; i < nums.size(); i++)
	{
		//first element of map now contains the index of element and the remainder of that element
        //Mapu.insert(make_pair(i,remainder)); //switched remainder and index
        
		diff = target - nums[i];           //
		if (Mapu[diff] != 0 && Mapu[diff] != i)  //if there is an element in indices that is in nums then the index can be found
		{
			cout << "Indices are "<< i<< " and " << Mapu[diff]<<endl;
			cout << Mapu[diff] << endl;
			indices.push_back(i);  //gets the index of the first element
			indices.push_back(Mapu[diff]); //gets the index of the second element
            break;
		}
		
	}//end second for loop
        return indices;
    }//end function
};
