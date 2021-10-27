#include<stdio.h>
#include<conio.h>
//Variable decleration
int a;
//******************************************************Main*************************************************
void main()
{
clrscr();
scanf("%d",&a);
if(a>0 && a<=10)
{
printf("motor on");
}
else if(a>10 && a<=90)
{
printf("motor is running");
}
else if(a>90 && a<=100)
{
printf("motor off");
}
else
{
printf("invalid number");
}
getch();
}
//*******************************************************End****************************************************
