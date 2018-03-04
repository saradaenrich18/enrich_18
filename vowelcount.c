#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000], n = 5;
    scanf("%[^\n]", s);
    int count[] = {0, 0, 0, 0, 0};
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'a'|| s[i] == 'A')
        {
            count[0]++;
        }
        else if(s[i] == 'e' || s[i] == 'E')
        {
            count[1]++;
        }
        else if(s[i] == 'i' || s[i] == 'I')
        {
            count[2]++;
        }
        else if(s[i] == 'o' || s[i] == 'O')
        {
            count[3]++;
        }
        else if( s[i] == 'u' || s[i] == 'U')
        {
            count[4]++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(count[i] != 0)
        {
        printf("%c-->%d\n", vowels[i], count[i]);
        }
    }
}
