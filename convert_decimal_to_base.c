#include<stdio.h>

int main() 
{
    int n, base;
    scanf("%d %d", &n, &base);
    int a[1000], i = 0;
    int number = n, ans = 0, r;
    
    while(number != 0)
    {
        r = number%base;
        a[i++] = r;
        number = number/base;
    }
    for(int j = i-1; j >= 0; j--)
    {
        ans = ans*10+a[j];
    }
    printf("%d", ans);
}
