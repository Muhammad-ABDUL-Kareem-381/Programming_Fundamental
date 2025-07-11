#include<stdio.h>
#include<conio.h>
int square(int a,int b);
int divide(int a);

void main()
{
    int c,d;
    c = square(2,3);
    d = c/13;
    printf("%d\n", d);
}
int square(int a,int b)
{
    int c,d;
    c = a*a + b*b;
    return c;
}
