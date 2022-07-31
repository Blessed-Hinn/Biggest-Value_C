#include <stdio.h>

/* A program that Prints the largest number in a separate file */

int main(void)
{
    FILE *biggest;  //Declared the file name
    biggest = fopen("biggest.txt", "w"); // Opened the file

    int a = 10, b = 50, c = 100;

    if (a == b && a == c && b == c)
    {
        fprintf(biggest, "All Value are equal\n"); //Print to the file
    }
    else if (a > b && a > c)
    {
        fprintf(biggest, "The Biggest Value is a: %d \n", a); //Print to the file
    }
    else if (b > a && b > c)
    {
        fprintf(biggest, "The Biggest Value is b: %d \n", b); //Print to the file
    }
    else
    {
        fprintf(biggest, "The Biggest Value is c: %d \n", c); //Print to the file
    }

    fclose(biggest); //Closed the file
    return (0);
}
