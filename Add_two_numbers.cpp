/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int num1 = 0;
        int num2 = 0;
        int carry = 0;
        int result = 0;
        ListNode *lResult = new ListNode(-1);
        ListNode *current = lResult;
       
        while(l1 || l2)
        {
           // std::cout<<"carry at beginning "<<carry<<std::endl; 0 and then 1
            //git numbers
            if(l1)
            {
                num1 = l1->val;
                l1 = l1->next;
                
            }
            else
            {
                num1 = 0;
            }
            
            if(l2)
            {
                num2 = l2->val;
                 l2 = l2->next;
            }
            else
            {
                num2 = 0;
            }            
            
            std::cout<<num1<<" + "<<num2<<" ";
            
            //do da math
            
            
            if(num1 + num2 + carry > 9)
            {
               // carry = 1;
                std::cout<<"carry before result "<<carry<<std::endl; //0 and then 1
                result =(num1 + num2+carry)%10;
                //std::cout<<"result"<<result<<std::endl;
                carry=1;
            }
            else
            {
                 result = num1 + num2 + carry;
                cout<<"No?"<<endl;
                 carry =0;
            }
            current->val = result; // current->val holds calculated val
            //need memory for next node
            if(l1  || l2 )
            {
                ListNode *newNode = new ListNode;
                current->next = newNode;
                current = current->next;
            }
           // std::cout<<lResult->val<<std::endl;
            
        }// end loop
        //std::cout<< lResult->val<<" "<< lResult->next->val<<" "<< lResult->next->next->val<<std::endl;
        if (carry >0)
        {
                //std::cout<<"affected????????????"<<std::endl;
                std::cout<<"carry "<<carry<<std::endl;
            
                ListNode *newNode = new ListNode;
                current->next = newNode;
                current = current->next;
                current->val = carry;
        }
        return lResult;
    }//end of func
};
