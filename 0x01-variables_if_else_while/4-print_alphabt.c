#include <stdio.h>

/**
 * main - print alphatic except 'e' and 'q'
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
