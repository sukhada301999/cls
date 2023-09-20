#include <stdio.h>
int main()
{
    int a[3] = {15,110,7};
    if (a[0] > a[1])
    {
        if (a[0] > a[2])
        {
            printf("The greater number is:a[0]");
        }
        else
        {
            printf(" greater number is: a[2]");
        }
     }   
        else
     {
            if (a[1] > a[2])
            {
                printf("greater number is: a[1]");
            }
            else
            {
                printf("greater number is: a[2]");
            }
      }

    return 0;
}