// WAP TO ADD AND MULTIPLY TWO MATRICES OF ORDER NXN
#include<stdio.h>

int main()
{
    int n, i, j, k;
    
    printf("Enter the order of matrix (n for nxn): ");
    scanf("%d", &n);
    
    int a[n][n], b[n][n], sum[n][n], mul[n][n];
    
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Addition
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Multiplication
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for(k = 0; k < n; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("\nSum of matrices:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    printf("\nProduct of matrices:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
