#include<stdio.h>
int main()
{
    int a=5,b=6,c;
    c=a;
    a=b;
    b=c;
    printf("\n a=%d and b=%d",a,b);
    return 0;
}