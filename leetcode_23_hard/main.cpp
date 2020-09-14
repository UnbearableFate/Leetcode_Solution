#include<vector>
#include<queue>
#include <algorithm>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* getMinHead(vector<ListNode*>& lists) {
    int minVal = -10000;
    ListNode* minHead;
    for (auto p : lists) {
        if( p->val < minVal) {
            minHead = p;
            minVal = p->val;
        }
    }
    return minHead;
}

bool myLessFunc(ListNode* a, ListNode* b) {
    if (a->val < b-> val) {
        return true;
    } else {
        return false;
    }
}

bool myGreater(vector<ListNode*>::iterator a, vector<ListNode*>::iterator b) {
    if((*a)->val > (*b)->val) {
        return true;
    } else {
        return false;
    }
} 

class Solution {
public:
    priority_queue <vector<ListNode*>::iterator, vector<vector<ListNode*>::iterator>, myGreater> qq;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        sort(lists.begin(), lists.end(), myLessFunc);

        
        return nullptr;
    }
};

int main() {
    return 0;
}
