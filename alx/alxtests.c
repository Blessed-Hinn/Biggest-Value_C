#include <stdio.h>

int main(void)
{
    int period = 1;
    int timeframe = 3;
    int principal = 12000;
    int rate = 8;
    int interest = 0;

    while (period <= timeframe)
    {
        principal = principal + interest;
        interest = (principal * rate * 1) / 100;
        printf("%d \n", interest);
        period++;
    }
}