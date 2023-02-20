#include <stdio.h>
#include <conio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf(" short int is %2d bytes \n", sizeof(short int));
printf(" int is %2d bytes \n", sizeof(int));
printf(" int * is %2d bytes \n", sizeof(int *));
printf(" long int is %2d bytes \n", sizeof(long int));
printf(" long int * is %2d bytes \n", sizeof(long int *));
return (0);
}
