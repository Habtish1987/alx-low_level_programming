#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)

		printf("%c", letter);

	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)

		printf("%c", LETTER);
	putchar('\n');

	return (0);
}
