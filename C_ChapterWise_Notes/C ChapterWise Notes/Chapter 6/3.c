#include<stdio.h>
#include<conio.h>
void var(int *a,int *b);

void main()
{
    int c,a,b;
    a = 4;
    b = 5;
    var(&a,&b);
    printf("value of a and b %d and %d\n", a,b);
    
}
void var(int *x,int *y)
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}