#include<stdio.h>
int main()
{
    int a= 0 , b=1 ,c, x;
    printf(" enter the num");
    scanf(" %d", & x);
    for( int i= 1; i<= x; i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;

    }

return 0;

}