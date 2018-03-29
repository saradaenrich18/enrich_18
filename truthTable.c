#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int l=0;
int truth_table(int a,int b,char op)
{
    switch(op)
    {
        case '+':
            return a|b;
        case '.':
            return a&b;
        case '^':
            return a^b;
    }
}

void printTruthTable(int res[],int a[][100],int row,int col)
{
    int i,j;
    for(i = 0; i < row; i++)
    {
        
        printf("\n");
        for(j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("%d  ", res[i]);
    }
}
int main() 
{
    int a[100][100], res[100], p=0, i, j, k, count, m = 0;
    char s[100], operator1[100];
    scanf("%s", s);
    
    for(i = 0; i < strlen(s); i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= 'a' && s[i] <= 'z'))
        {
            printf("%c ",s[i]);
            l++;
        }
        else
        {
            operator1[m] = s[i];
            m++;
        }
    }
    if(l == 0)
    {
        printf("Enter valid expression");
        return 0;
    }
    printf("%s", s);
    int power = pow(2,l);
    for(i = 0; i < l; i++) 
    {
        k = 0; 
        count = 0;
        while(count < pow(2,l))
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
    for(i = 0; i < pow(2,l); i++)
    {
        res[i] = truth_table(a[i][0], a[i][1], operator1[0]);
    }
    for(int h = 1; h < m; h++)
    {
        for(i = 0; i < pow(2,l); i++)
        {
            res[i] = truth_table(res[i], a[i][h+1], operator1[h]);
        }
    }
    printTruthTable(res,a,pow(2,l),l);
}
