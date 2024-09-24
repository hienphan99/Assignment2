#include <stdio.h>

int main()
{
	int x[10];
	int n=10;
	int i = 0;
	printf("Nhap vao cac gia tri cua mang: ");
	for(i=0;i<n;i++){
		printf("a[%d] = " , i);
		scanf ("%d" , x+i);
	}
	printf("Gia tri cua mang vua nhap: ");
	for(i=0;i<n;i++){
		printf("\na[%d] = %d" , i, *(x+i));
	}

}
