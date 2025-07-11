#include<stdio.h>
#include<conio.h>
int var(int i);

void main()
{
   int i,k;
   int *j;
   i = 8;
   j = &i;
   printf("adress of i %u\n", &i);
   k=var(i);
   printf("address of i %d\n", k);

}
int var(int i)
{
   int *j;
   j = &i;
   return j;

}