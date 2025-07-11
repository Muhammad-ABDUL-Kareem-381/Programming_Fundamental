#include<stdio.h>
#include<conio.h>
void multipletable(int *a);

void main()
{
  int mark[10];
  for(int i=1;i<=10;i++)
  {
    mark[i] = i * 2;
    printf("%d\n", mark[i]);
  }
  multipletable(mark);
}
void multipletable(int *a)
{
    for(int i=1;i<=10;i++)
    {
       *a = i*3;
       printf("%d\n", *(a+i));
    }
}