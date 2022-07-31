#include <stdio.h>

/**
 * Conditional/Ternary Operator -?-
 * Condition ? Value_ifTrue : Value_ifFalse
 * If the conditon is true Executes the true Value
 * Otherwise executes te false Value
 * The operator associates from right to left
 * exp1 ? exp2 : ( exp3 ? exp4 : exp5 )
 */

int main(void)
{
    /**
     * 1: If (1 == 2) Print x, else print y.
     * 2: If (2 != 3) Print y, else print x.
     * "\t" tabs characters
     */

    int x = 5;
    int y = 42;
    printf("%i ,%i \n", 1 == 1 ? x : y, 2 == 3 ? x : y);

    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");

    // Prints the Biggest Number

    int a = 30,
        b = 40, c = 10;

    int big = a > b ? (a > c ? a : c)
                    : (b > c ? b : c);

    printf("%i \n", big);

    return (0);
}
