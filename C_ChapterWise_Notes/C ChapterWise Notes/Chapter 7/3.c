#include<stdio.h>
#include<conio.h>

void main()
{
    int hero[9];
    int *j;
    j = &hero[9];
    for(int i=0;i<9;i++)
    {
        printf("enter the number %d\n", i);
        scanf("%d", &hero[i]);
    }
    for(int i=0;i<9;i++)
    {
        printf("%u\n", &hero[i]);
    }
}