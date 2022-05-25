#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

void Add()
{
	printf("ÄãºÃ\n");
}

int main()
{
	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	Add();
	return 0;
}