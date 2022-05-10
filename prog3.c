#include <stdio.h>

void multiply(int a[10][10], int b[10][10], int, int, int);

int main()
{
    int a[10][10], b[10][10];
    int m, n, p, sum;
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("------------M A T R I X  M U L T I P L I C A T I O N------------\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
    printf("----------------------------------------------------------------\n");
    printf("Enter the number of rows and columns in First Matrix : ");
    scanf("%d %d", &m, &n);
    printf("----------------------------------------------------------------\n\n");
    printf("----x----x----x----x----x----x----x----\n");
    printf("Enter the elements of First Matrix\n");
    printf("----x----x----x----x----x----x----x----\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d] number\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n----------------------------------------------------------------\n");
    printf("Enter the number of columns in second matrix : ");
    scanf("%d", &p);
    printf("----------------------------------------------------------------\n\n");
    printf("----x----x----x----x----x----x----x----\n");
    printf("Enter the elements of Second Matrix\n");
    printf("----x----x----x----x----x----x----x----\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Enter b[%d][%d] number\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n\n******************************\n");
    printf("First matix is\n");
    printf("******************************\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n******************************\n");
    printf("Second matix is\n");
    printf("******************************\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("Multiplication of both Matrix is\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    multiply(a, b, m, n, p);
    return 0;
}

void multiply(int a[10][10], int b[10][10], int m, int n, int p)
{
    int sum[10][10];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            sum[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                sum[i][j] = sum[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}


