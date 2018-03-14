#include<stdio.h>
int main() 
{
    int n, row, col, x, y;
    scanf("%d", &n);
    
    if(n%2 == 0)
    {
        printf("Magic square is not possibele");
        return 0;
    }
    
    int magic_matrix[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            magic_matrix[i][j] = 0;
        }
    }
    
    row = 0;
    col = n/2;
    magic_matrix[row][col] = 1;
    for(int i = 2; i <= n*n; i++)
    {
        x = (row-1+n) % n;
        y = (col+1+n) % n;
        if(magic_matrix[x][y] == 0)
        {
            row = x;
            col = y;
        }
        else
        {
            while(magic_matrix[row][col] != 0)
            {
                row = (row+1+n) % n;
            }
        }
        magic_matrix[row][col] = i;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", magic_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
