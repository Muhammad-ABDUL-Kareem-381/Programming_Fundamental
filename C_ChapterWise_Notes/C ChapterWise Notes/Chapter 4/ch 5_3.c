#include<stdio.h>
#include<conio.h>
int factorial(int a);

void main()
{
    int s;
    s = factorial(3);
    printf("%d\n", s);
}
int factorial(int a)
{
    int b;
    b = a;
    if(b==0 || b==1)
    {
        return 1;
    } 
    else
    {
        return b*factorial(a-1);
    }
}