#include <stdio.h>

int reverse(int n)
{
    int r, rev = 0;
    while(n != 0)
    {
        r = n%10;
        rev = rev*10+r;
        n = n/10;
    }
    return rev;
}

int isPalindrome(int n)
{
    if(reverse(n) == n)
    {
        return 1;
    }
    return 0;
}

int main() 
{
    int n, res;
	scanf("%d", &n);
	int ans = n;
	while(res != 1)
	{
	    ans++;
	    res = isPalindrome(ans);
	}
	printf("%d", ans);
	return 0;
}
