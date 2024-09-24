#include <stdio.h>
int sum (int &a, int &b)
{
	return a + b;
}

int diff (int &a, int &b)
{
	return a - b;
}


int main()
{
	int a , b;
	printf("Nhap gia tri hai so a va b :");
	scanf("%d%d", &a, &b);
	printf("\nTong hai so a va b: %d" , sum(a,b));
	printf("\nHieu hai so a va b: %d", diff(a,b));
}
