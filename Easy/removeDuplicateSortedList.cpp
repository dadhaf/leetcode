#include<iostream>
#include<vector>

using namespace std;

/*
 * Definition for singly-linked list. 
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *top = head;
        while(top!=nullptr)
        {
            if(top->next != nullptr) 
            {
                if(top->val == top->next->val)
                {
                    top->next = top->next->next;
                } else {
                    top = top->next;
                }
            
                
            } else {
                break;
            }
        } 

        return head;
    }
};


int main()
{
    vector<int> v{1,1};
    ListNode ln1(v[0]);
    struct ListNode *head = (ListNode*)malloc(sizeof(struct ListNode));
    head->val = v[0];
    head->next = nullptr;
    struct ListNode ln2 = ListNode(v[1], head);
    struct ListNode ln4 = ListNode(v[1], &ln2);
    struct ListNode *ln3; // = ListNode(v[2], &ln2);

    Solution sol;
    ln3 = sol.deleteDuplicates(&ln4);
    while (ln3!=nullptr)
    {
        cout<<ln3->val << endl;
        ln3 = ln3->next;
    }
    

}