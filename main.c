//S VIBIN MICHAEL
//25036_012
//07.04.2026
#include "apc.h"
int main(int argc, char *argv[])
{
    // Initialize head & tail pointers for two operands and result
    node *head1 = NULL, *tail1 = NULL;
    node *head2 = NULL, *tail2 = NULL;
    node *headR = NULL, *tailR = NULL;

    // Validate command line arguments (count + numeric check)
    if(cla_validation(argc, argv) == FAILURE)
    {
        return 0;   // Exit if validation fails
    }

    // Create linked lists from input operands
    create_list(argv[1], &head1, &tail1);
    create_list(argv[3], &head2, &tail2);

    // Extract operator (+, -, x, /)
    char oper = argv[2][0];

    switch(oper)
    {
        case '+':
            // Perform addition
            addition(tail1, tail2, &headR, &tailR);
            print_list(headR);
            break;

        case '-':
        {
            // Compare operands to handle sign
            int cmp = compare_list(head1, head2);

            if (cmp == OPERAND1 || cmp == SAME)
            {
                // operand1 >= operand2
                subtraction(tail1, tail2, &headR, &tailR);
                print_list(headR);
            }
            else
            {
                // operand2 > operand1 → result negative
                subtraction(tail2, tail1, &headR, &tailR);
                printf("-");
                print_list(headR);
            }
            break;
        }

        case 'x':
        case 'X':
            // Perform multiplication
            multiplication(tail1, tail2, &headR, &tailR);
            print_list(headR);
            break;

        case '/':
            // Perform division
            division(head1, head2, &headR, &tailR);
            print_list(headR);
            break;

        default:
            // Invalid operator case
            printf("Invalid operator\n");
    }
}