#include <stdio.h>
/**
 * main - Entry point
 * Description: "print all single digit number of base 10"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + 48);
	}
	putchar('\n');
	return (0);
}
