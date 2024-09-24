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

            // Sao ch�p d? li?u t? m?ng cu p sang m?ng m?i q
            for (int i = 0; i < *n; ++i) {
                q[i] = (*p)[i];
            }
            
            // Gi?i ph�ng b? nh? m?ng cu
            free(*p);

            // C?p nh?t con tr? p d? tr? t?i m?ng m?i q
            *p = q;
        }

        // Th�m ph?n t? m?i v�o m?ng
        (*p)[(*n)++] = x;
    }
}

int main() {
    int maxSize = 2; // K�ch thu?c ban d?u c?a m?ng
    int n = 0;       // S? ph?n t? hi?n t?i trong m?ng
    int* p = (int*)malloc(maxSize * sizeof(int)); // C?p ph�t d?ng m?ng p ban d?u

    if (p == NULL) {
        printf("\nError: Khong the cap phat bo nho!\n");
        return 1; // Tho�t n?u kh�ng th? c?p ph�t
    }

    // G?i h�m d? nh?p d? li?u v�o m?ng
    inputArrayExtend(&p, &n, &maxSize);

    // In l?i c�c ph?n t? d� nh?p
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", p[i]);
    }
    printf("\n");

    // Gi?i ph�ng b? nh?
    free(p);

    return 0;
    }
