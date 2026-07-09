#include "apc.h"
void multiplication(node *tail1, node *tail2, node **headR, node **tailR)
{
    node *t2 = tail2;
    int zeros = 0;

    node *finalHead = NULL;
    node *finalTail = NULL;

    while (t2 != NULL)
    {
        node *t1 = tail1;
        int carry = 0;

        node *tempHead = NULL;
        node *tempTail = NULL;

        // shift (add zeros)
        for (int i = 0; i < zeros; i++)
        {
            insert_first(&tempHead, &tempTail, 0);
        }

        while (t1 != NULL)
        {
            int prod = t1->data * t2->data + carry;
            carry = prod / 10;

            insert_first(&tempHead, &tempTail, prod % 10);

            t1 = t1->prev;
        }

        if (carry)
            insert_first(&tempHead, &tempTail, carry);

        // add to final result
        if (finalHead == NULL)
        {
            finalHead = tempHead;
            finalTail = tempTail;
        }
        else
        {
            node *resHead = NULL;
            node *resTail = NULL;

            addition(finalTail, tempTail, &resHead, &resTail);

            finalHead = resHead;
            finalTail = resTail;
        }

        zeros++;
        t2 = t2->prev;
    }

    *headR = finalHead;
    *tailR = finalTail;
}
