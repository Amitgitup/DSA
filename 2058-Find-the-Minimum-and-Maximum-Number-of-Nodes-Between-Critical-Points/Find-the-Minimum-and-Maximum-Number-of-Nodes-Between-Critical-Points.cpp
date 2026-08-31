#include<bits/stdc++.h>
using namespace std;



 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

 
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        int first = -1;
        int last = -1;
        int minDist = INT_MAX;

        int index = 1; 

        ListNode* prev = head;
        ListNode* cur = head->next;
        

        while(cur->next != NULL) {
            
            // Check whether cur is a critical point
            bool critical = 
                (cur->val > cur->next->val && cur->val > prev->val) || 
                (cur->val < cur->next->val && cur->val < prev->val);
            
            if (critical) {

                // First Critical Point
                if (first == -1) {
                    first = index;
                }
                else {
                    minDist = min(minDist, index - last);
                }

                // Current point becomes the previous critical point
                last = index;
            }

            prev = cur;
            cur = cur->next;
            index++;
        }

        // Fewer than 2 critical points
        if (first == -1 || first == last) return {-1, -1};

        // Maximum Dist = last critical - first critical
        int maxDist = last - first;

        return {minDist, maxDist};
    }
};
