#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *msg = "_putchar\n";
	int i;

	for (i = 0; msg[i] != '\0'; i++)
		_putchar(msg[i]);
	return (0);
}
