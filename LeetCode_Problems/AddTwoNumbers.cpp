// problem link
// https://leetcode.com/problems/add-two-numbers/description/


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<struct ListNode *> q1, q2;
        struct ListNode *temp = l1;

        while(temp){
            q1.push(temp);
            temp = temp->next;
        }

        temp = l2;

        while(temp){
            q2.push(temp);
            temp = temp->next;
        }

        int val = 0, extra = 0;
        if(q1.size() >= q2.size()){
            while(!q1.empty()){
                if(!q2.empty()){
                val = q1.front()->val + q2.front()->val + extra;
                q2.pop();
                }else{
                    val = q1.front()->val + extra;
                }

                q1.front()->val = val%10;
                temp = q1.front();
                q1.pop();
                extra = val/10;
            }

            if(extra > 0){
                ListNode *temp1 = new ListNode(extra);
                temp->next = temp1;
            }
            return l1;
        }else{
            while(!q2.empty()){
                if(!q1.empty()){
                    val = q1.front()->val + q2.front()->val + extra;
                    q1.pop();
                }else{
                    val = q2.front()->val + extra;
                }

                q2.front()->val = val%10;
                temp = q2.front();
                q2.pop();
                extra = val/10;
            }

            if(extra > 0){
                ListNode *temp1 = new ListNode(extra);
                temp->next = temp1;
            }
            return l2;
        }
    }
};
