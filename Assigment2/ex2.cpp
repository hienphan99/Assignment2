#include<stdio.h>
#include <stdlib.h>

void inputArrayExtend(int** p, int* n, int* maxSize) {
    char input;
    int x;

    while (1) {
        printf("\nNhap so nguyen khong am nho hon 10 (hoac nhap'@' de stop): ");
        scanf("%c", &input);
		getchar();
        if (input == '@') {
            break;
        }
        x = input - '0';

        if (x < 0 || x >= 10) {
            printf("So khong hop le, vui long nhap lai!\n");
            continue;
        }

        if (*n == *maxSize) {
            *maxSize *= 2;
            int* q = (int*)malloc(*maxSize * sizeof(int));

            if (q == NULL) {
                printf("Erro: Khong cap phat duoc bo nho!\n");
                exit(1);
            }
            for (int i = 0; i < *n; ++i) {
                q[i] = (*p)[i];
            }
            free(*p);
            *p = q;
        }
        (*p)[(*n)++] = x;
    }
}

int main() {
    int maxSize = 2; 
    int n = 0;      
    int* p = (int*)malloc(maxSize * sizeof(int)); 

    if (p == NULL) {
        printf("\nError: Khong the cap phat bo nho!\n");
        return 1; 
    }
    inputArrayExtend(&p, &n, &maxSize);
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
    }
