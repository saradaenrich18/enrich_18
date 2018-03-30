#include <stdio.h>
void subset(int array[], int temp[], int start, int end, int index, int r)
{
    int j, i;
    if (index == r) 
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", temp[j]);
        }
        printf("\n");
        return;
    }
    for (i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        temp[index] = array[i];
        subset(array, temp, i+1, end, index+1, r);
    }
}
int main()
{
    int array[20], k, n, i, data[20];
    scanf("%d", &n);
    for (  i = 0; i < n; i++)
    {
	      scanf("%d", &array[i]);
    }
    
    for(int i=1;i<=n;i++)
    {
        subset(array, data, 0, n - 1, 0, i);
    }
    return 0;
}
