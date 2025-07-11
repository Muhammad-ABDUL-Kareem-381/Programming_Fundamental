#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    int *j;
    a=8;
    j=&a;
    printf("adress %u\n", &a);
    printf("value of variable %d\n", *j);


}