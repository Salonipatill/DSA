#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Merge Two Sorted Lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    // Attach remaining nodes
    if (list1 != NULL)
        tail->next = list1;

    if (list2 != NULL)
        tail->next = list2;

    return dummy->next;
}

// Print List
void printList(ListNode* head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // List 1
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    // List 2
    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    ListNode* ans = mergeTwoLists(list1, list2);

    printList(ans);

    return 0;
}