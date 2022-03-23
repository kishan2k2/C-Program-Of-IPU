#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void)
{
    int choice;
    int a[10][10], b[10][10], c[10][10];
    int i, j, k;
    int x, y, z;
    printf("\n MATRIX OPERATIONS");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Transpose");
    printf("\n 5. upper and lower sum");
    printf("\n 6. Exit");
    printf("\n Enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n Enter order of the matrices A and B:");
        scanf("%d,%d", &x, &y);
        printf("\n Enter matrix A:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                scanf("%d", &a[i][j]);
        }
        printf("\n Enter matrix B:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                scanf("%d", &b[i][j]);
        }
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n Matrix A is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", a[i][j]);
        }
        printf("\n Matrix B is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", b[i][j]);
        }
        printf("\n Matrix A+B is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", c[i][j]);
        }
        break;
    case 2:
        printf("\n Enter order of the matrices A and B:");
        scanf("%d,%d", &x, &y);
        printf("\n Enter matrix A:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                scanf("%d", &a[i][j]);
        }
        printf("\n Enter matrix B:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                scanf("%d", &b[i][j]);
        }
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                c[i][j] = a[i][j] - b[i][j];
        }
        printf("\n Matrix A is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", a[i][j]);
        }
        printf("\n Matrix B is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", b[i][j]);
        }
        printf("\n Matrix A-B is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", c[i][j]);
        }
        break;
    case 3:
        printf("\n Enter order of the matrices A and B:");
        scanf("%d,%d,%d", &x, &y, &z);
        printf("\n Enter matrix A:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                scanf("%d", &a[i][j]);
        }
        printf("\n Enter matrix B:");
        for (i = 0; i < y; i++)
        {
            for (j = 0; j < z; j++)
                scanf("%d", &b[i][j]);
        }
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < z; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < y; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        printf("\n Matrix A is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", a[i][j]);
        }
        printf("\n Matrix B is:");
        for (i = 0; i < y; i++)
        {
            for (j = 0; j < z; j++)
                printf("%d ", b[i][j]);
        }
        printf("\n Matrix AxB is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < z; j++)
                printf("%d ", c[i][j]);
        }
        break;
    case 4:
        printf("\n Enter order of the matrix A:");
        scanf("%d,%d", &x, &y);
        printf("\n Enter matrix A:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                scanf("%d", &a[i][j]);
        }
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                b[i][j] = a[j][i];
        }
        printf("\n Matrix A is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", a[i][j]);
        }
        printf("\n Transpose of A is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
                printf("%d ", b[i][j]);
        }
        break;
    case 5:
        printf("\n Enter order of the matrix A:");
        scanf("%d", &x);
        printf("\n Enter matrix A:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < x; j++)
                scanf("%d", &a[i][j]);
        }
        k = 0;
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < x; j++)
            {
                if (i == j)
                    k += a[i][j];
            }
        }
        printf("\n Matrix A is:");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < x; j++)
                printf("%d ", a[i][j]);
        }
        printf("\n Trace of A is:");
        printf(" %d", k);
        break;
    case 6:
        exit(0);
        break;
    default:
        printf("\n INVALID CHOICE");
        break;
    }
    getch();
}
