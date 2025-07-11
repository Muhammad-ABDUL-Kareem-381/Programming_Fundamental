#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    i=10;
    printf("enter the no,\n");
    scanf("%d",&n);
    do
    {
        printf("natural no.%d\n", i);
        i--;
    } while (i>=n);
    
}