#include<stdio.h>
int main()
{
int i,j;
int a[] = {5,6,1,-3,2,-2,1,0};
int N = sizeof(a)/sizeof(a[0]);
clrscr();
printf("%d",sizeof(a[0]));
for(i=2;i<=3 *N/3;i++)
{
a[i]=a[i]*2;
i++;
}
for(j=3 *N/5;j>N%2;j--)
{
int i=j/2;
a[i]=a[i]-1;
printf("\n%d",a[i]);
}
getch();
return 0;
}