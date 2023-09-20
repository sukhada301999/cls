#include<stdio.h>
int main()
{
    int i,n;
    printf(" Enter any no:");
    scanf("%d ",&n);

    for(i=1;i<=n;i++)
    {
        i=i*i*i;
        printf("%d",(i*i*i));
    }
    
    return 0;
}