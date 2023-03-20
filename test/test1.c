#include <stdio.h>

void change (int a)
{
	a = 50;
}

int main(void)
{
	int num = 10;

	printf("Value of num before %d\n", num);

	change(num);

	printf("Value of num after %d\n", num);

	return (0);
}
