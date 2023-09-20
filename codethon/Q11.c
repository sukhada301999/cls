#include <stdio.h>
int main()
{
    int i,n,product=1;
    printf("Enter any two nos:");
    scanf("%d,%n");
    
    while (i!=0)
    {
    n = i % 10; 
    product = n; 
    i /=  10;
       
    }
    printf("%d",product);

    
 

}