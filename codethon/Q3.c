#include<stdio.h>
int main()
{
int  fir,las,i,a,b ;
printf(" Enter the fir No : ") ;
scanf("%d ",& fir) ;
printf("  Enter the las No : ") ;
scanf("%d ",& las) ;
printf(" Prime No.s are :\n ") ;
for(b = fir ;  b <= las ;  b++ ) ;
{
i= 0 ;
for(a = 2;a < i;i++);
{
if (b % a == 0)
i = i+1 ;
}
if (i== 0)
printf(" \n %d ",b) ;
}
return 0 ;
}
