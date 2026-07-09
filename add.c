#include "apc.h"

void addition(node *tail1, node *tail2, node **headR, node **tailR)
{

    int sum = 0, carry = 0; // Store digit sum and carry

    node *temp1 = tail1; //pointer for operand 1
    node *temp2 = tail2; //pointer for operand 2

    while (temp1 != NULL || temp2 != NULL)
    {
        //add both digit and carry
        if (temp1 != NULL && temp2 != NULL)
        {
            sum = temp1->data + temp2->data + carry;
        }
        else if (temp1 != NULL)
        {
            sum = temp1->data + carry;
        }
        else
        {
            sum = temp2->data + carry;
        }

        if (sum >= 10)
        {
            carry = 1;
            sum = sum % 10; //store the single digit
        }
        else
        {
            carry = 0;
        }

        insert_first(headR, tailR, sum);
        //move to previous digit
        if (temp1 != NULL)
            temp1 = temp1->prev;
        if (temp2 != NULL)
            temp2 = temp2->prev;
    }
    //if carry remains same after loop ,insert it
    if (carry > 0)
    {
        insert_first(headR, tailR, carry);
    }
}