#include "apc.h"

void division(node *head1, node *head2, node **headR, node **tailR)
{
    node *tempHead = NULL;
    node *tempTail = NULL;

    // copy dividend
    node *t = head1;
    while (t)
    {
        insert_last(&tempHead, &tempTail, t->data);
        t = t->next;
    }

    // find tail2
    node *tail2 = head2;
    while (tail2->next != NULL)
        tail2 = tail2->next;

    int count = 0;

    while (compare_list(tempHead, head2) == OPERAND1 ||
           compare_list(tempHead, head2) == SAME)
    {
        node *resHead = NULL;
        node *resTail = NULL;

        subtraction(tempTail, tail2, &resHead, &resTail);

        tempHead = resHead;
        tempTail = resTail;

        remove_pre_zeros(&tempHead);

        count++;
    }

    
    if (count == 0)
    {
        insert_first(headR, tailR, 0);
        return;
    }

    // store count in list
    while (count)
    {
        insert_first(headR, tailR, count % 10);
        count /= 10;
    }
}