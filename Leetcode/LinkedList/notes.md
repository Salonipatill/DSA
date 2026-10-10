Linked List :- it is a linear data structure where each element is stored in nodes and each node contains address of next node.

in the functions of the linked list we use this pointer to  the current object .
this is useful when class memeber and parameter have same name  
pproach (Dummy Node)

We create a dummy node so we don't have to handle the first node separately.

dummy -> NULL
tail = dummy

tail always points to the last node of the merged list.

ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;