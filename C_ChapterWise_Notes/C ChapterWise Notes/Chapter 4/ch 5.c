#include<stdio.h>
#include<conio.h>
int sum(int a,int b);

void main()
{
    int d;
    d = sum(10,20);
    printf("total sum is %d\n", d);
}
int sum(int a,int b)
{
    int c;
    c = a+b;
    return c;
}