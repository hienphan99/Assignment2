#include <stdio.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main ()
{
    int a , b ;
    printf("Nhap so a: ");
    scanf ("%d", &a);
    printf ("Nhap so b: ");
    scanf("%d" , &b);
    printf("\nGia tri a va b truoc khi hoan doi: %d, %d ", a,b);
    swap(a, b);
    printf("\nGia tri a va b sau khi hoan doi: %d, %d", a,b);

}

