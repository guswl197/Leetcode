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
    int getDecimalValue(ListNode* head) {
        
        vector<int> v;
        int ans=0; 
        
        while(1){
            v.push_back(head->val);
            if(head->next==NULL){
                break; 
            }
            else{
                head=head->next; 
            }
        }
        
        int len= v.size()-1; 
        for(int i=0; i<v.size();i++){
            ans+= v[i]*pow(2,len--); 
        }
        
        return ans; 
    }
};