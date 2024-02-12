#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20,*p,*d;
    clrscr();
    p=&a;
    d=&b;
    printf("%u\n",*p);
   // scanf("%d",p);
    printf("%u\n",*d);
  //  scanf("%d",d);
    getch();
}