#include <stdio.h>

/**
 * main - prints the name of the file program was compiled from
 * Return: Always 0
 */

int main(void)
{
	printif("%s\n", __FILE__);
	return (0);
}
