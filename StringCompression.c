#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
{
    char s[100];
    scanf("%s", s);
    char ans[100];
    int count = 1, k = 0, i;
    
    for(i = 0; i < strlen(s)-1; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
        else
        {
            ans[k++] = s[i];
            if(count != 1)
            {
                ans[k++] = count+'0';
            }
            count = 1;
        }
    }
    if(s[i] == s[i+1])
    {
        count++;
    }
    else
    {
        ans[k++] = s[i];
        if(count != 1)
        {
            ans[k++] = count+'0';
        }
    }
    ans[k] = '\0';
    printf("%s",ans);
}
