#include <stdio.h>
/**
 * main - Entry point
 * Description: "print single digit number of base 10"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
