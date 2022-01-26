#include<stdio.h>
/**
*main - prints various sizes and types
*
*Return: 0 if successful
*/
int main(void)
{
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of float: %ld byte(s)\n", sizeof(float));
printf("Size of double: %ld byte(s)\n", sizeof(double));
printf("Size of char: %ld byte(s)\n", sizeof(char));
return(0);
}
