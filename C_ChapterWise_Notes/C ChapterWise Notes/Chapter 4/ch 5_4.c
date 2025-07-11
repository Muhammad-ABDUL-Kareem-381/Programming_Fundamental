#include<stdio.h>
#include<conio.h>
int avg(int a,int b,int c);
void main()
{
    float d;
    d = avg(4,9,7);
    printf("%f\n", d);
}
int avg(int a,int b,int c)
{
    float d;
    d = (a+b+c)/3;
    return d;
}