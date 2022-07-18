#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=4, b=3, c;
system("");
c=a++ == ++b;
printf("a=%d, b=%d, c=%d", a,b,c);
getch();
}