#include<stdio.h>
#include<string.h>
int main() 
{
    float matrix[10][10];
    int n;
    float x, a[10], det = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == j)
            {
                break;
            }
            else
            {
                x = ((double)matrix[i][j] / matrix[j][j]);
                for(int k = 0; k < n; k++)
                {
                    a[k] = x * matrix[j][k];
                    matrix[i][k] = matrix[i][k] - a[k];
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        det *= matrix[i][i];
    }
    printf("%.2f", det);
}
