#include<stdio.h>

int main() 
{
   int number;
   scanf("%d", &number);
   int r, count = 0;
   int temp = number;
   
    while(temp > 0)
    {
        r = temp%2;
        if(r == 1)
        {
            count++;
        }
        temp = temp/2;
    }
    printf("%d", count);
}
