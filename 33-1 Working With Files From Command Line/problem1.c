#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int sum=0;
    for(i=0; i<n; i++)
    {
        int a;
        scanf("%d", &a);
        sum+=a;

    }
    printf("%d", sum);
    return 0;
}