#include <stdio.h>

void cough(void);

int main(void)
{
	cough(3);
}

void cough(int n)
{
	int i;
	for (i = 0; i < n; i++);
	{
		printf("Cough\n");
	}
}
