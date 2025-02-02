#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
       int val;
       ListNode* next;

    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};
ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
          
}
int main(){
    list<int> l1 = {1,2,3,4,5,6};
    list<int> l2 = {10,20,30};
    l1.erase(next(l1.begin(),3),next(l1.begin(),4));
    l1.insert(next(l1.begin(),3),l2.begin(),l2.end());
    for (int val:l1)
    {
        cout << val <<" ";
    }

    
    
    return 0;
}