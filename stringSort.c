#include<stdio.h>
#include<string.h>
int main() 
{
   char s[100][100];
   char t[100];
   int n, x, y;
   scanf("%d", &n);
   for(int i = 0; i < n; i++)
   {
       scanf("%s", s[i]);
   }
   
   for(int i = 0; i < n; i++)
   {
       for(int j = i + 1; j < n; j++)
       {
           sscanf(s[i], "%d", &x);
           sscanf(s[j], "%d", &y);
           if(x > y)
           {
               strcpy(t, s[i]);
               strcpy(s[i], s[j]);
               strcpy(s[j], t);
           }
       }
   }
   for(int i = 0; i < n; i++)
   {
       printf("%s ", s[i]);
   }
}
