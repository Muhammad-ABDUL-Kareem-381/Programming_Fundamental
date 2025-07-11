#include<stdio.h>
#include<conio.h>
void arry(int *a);

void main()
{
    int don[]={12,88,44,77,55,11,22,66,88,44};
    arry(don);
}
void arry(int *a)
{
    for(int i=0;i<10;i++)
    {
        printf("%d\n", *(a+i));

    }
}