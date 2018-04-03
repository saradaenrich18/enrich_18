#include<stdio.h>
#include<string.h>

int isUniq(char *s, int i, int j)
{
    for(int m = i; m <= j; m++)
    {
        for(int n = i; n < m; n++ )
        {
            if(s[n] == s[m])
            {
                return 0;
            }
        }
    }
    return 1;
}

void print(char *s, int i, int j)
{
    for(int m = i; m <= j; m++)
    {
        printf("%c", s[m]);
    }
}

void Uniq(char *s)
{
    int res, max = -1, resi, resj;
    for(int i = 0; i < strlen(s); i++)
    {
        for(int j = i; j < strlen(s); j++)
        {
            if(i != j)
            {
                res = isUniq(s, i, j);
            }
            else
            {
                res = 1;
            }
            if(max < (j-i+1) && res == 1)
            {
                resi = i;
                resj = j;
                max = j-i+1;
            }
        }
    }
    print(s, resi, resj);
}

int main() 
{
    char s[100];
    scanf("%s", s);
    Uniq(s);
}
