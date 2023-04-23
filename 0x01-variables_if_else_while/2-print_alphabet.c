#include <stdio.h>
/**
 * main - Entry point
 * Description: "printing alphabet in lowercase"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
{
	putchar(n);
}
	putchar('\n');
	return (0);
}
