#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
void printSubset(int s[],int a[][100],int col,int row)
{
    int i,j;
    for(i=1;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==1)
            {
                printf("%d",s[j]);
            }
        }
        printf("\n");
    }
    
}
int main() 
{
    int a[100][100],n, res[100], p=0, i, j, k,l=0,count, m = 0;
    int s[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    
    int power = pow(2,n);
    for(i = 0; i < n; i++) 
    {
        k = 0; 
        count = 0;
        while(count < pow(2,n))
        {
            for(j = 0; j < power/2; j++)
            {
                a[k++][i] = p;
                count++;
            }
            for(j = 0; j < power/2; j++)
            {
                a[k++][i] = p+1;
                count++;
            }
        }
        power = power/2;
    }
    printSubset(s,a,n,pow(2,n));
}
