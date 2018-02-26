#include<stdio.h>

int main() 
{
   int number;
   int a[10000];
   int rotate_count;
   scanf("%d %d", &number, &rotate_count);
   int temp=number,j=0,r,t,first;
   
   while(temp > 0)
   {
       r = temp%10;
       a[j] = r;
       j++;
       temp = temp/10;
   }
   
   for(int i = 0; i < rotate_count; i++)
   {
       first = a[j-1];
       for(int k = j-1; k >= 0; k--)
       {
           if(k == 0)
           {
               t = a[k];
               a[k] = first;
           }
           else
           {
               a[k] = a[k-1];
           }
       }
   }
   
   for(int l = j-1; l >= 0; l--)
   {
       printf("%d", a[l]);
   }
}
