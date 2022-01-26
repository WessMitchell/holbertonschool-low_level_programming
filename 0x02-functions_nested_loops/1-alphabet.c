#include<stdio.h>
/**
*main - prints the alphabet in lowercase
*
*Return: 0 if sucessful
*/
void print_alphabet(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
return (0);
}
