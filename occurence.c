#include<stdio.h>

int main()
{
    int n, i, j;
    int a[1000], b[1000][2], k = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                break;
            }
        }
        if(i == j)
        {
            b[k++][0] = a[i];
        }
    }
    for(i = 0; i < k; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(b[i][0] == a[j])
            {
                count++;
            }
        }
        b[i][1] = count;
    }
    for(i = 0; i < k; i++)
    {
        printf("%d-->%d\n", b[i][0], b[i][1]);
    } 
    return 0;
}
