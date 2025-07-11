#include<stdio.h>
#include<conio.h>

void main()
{
    int hero[8];
    for(int i=0;i<8;i++)
    {
        printf("enter the number %d\n", i);
        scanf("%d", &hero[i]);
    }
    for(int i=0;i<8;i++)
    {
        printf("printed number %d\n", hero[i]);
    }
}