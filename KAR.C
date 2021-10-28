#include <stdio.h>
int main()
{
unsigned char c=(int)0.54;
clrscr();
for(;c++;printf("%d",c));
printf("%d",c);
getch();
return 0;
}
