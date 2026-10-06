//
//  linkeList.h
//  Test_cpp
//
//  Created by Mithu on 30/09/26.
//

#include <iostream>
#include <string>

using namespace std;
class ListNode
{
    ListNode* next;
    int value;
public:
    ListNode(int val):Value(val), next(nullptr){}
    ListNode* findCircular(ListNode *head);
};
ListNode* ListNode::findCircular(ListNode *head)
{
    ListNode* slow= head;
    ListNode* fast = head;
    while(fast->next!=nullptr && fast->next->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            return slow;
        }
    }
    return nullptr;
    
}
ListNode* ListNode::reverseList(ListNode* head)
{
    ListNode* next;
    ListNode* prev= nullptr;
    ListNode* curr= head;
    while(curr !=nullptr && curr->next != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    
    return head;
}
ListNode* middleOfList(ListNode* head)
{
    ListNode* slow= head;
    ListNode* fast= head;
    while(fast && fast->nest)
    {
        slow = slow->next;
        fast = fast->nest->next;
    }
    return slow;
}

