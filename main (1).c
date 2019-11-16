/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int shownumbers(int a)
{
    for(int i=1;i<=a;i++)
    {if(i%2==0)
       printf("%d even\n",i);
    if(i%2!=0)
        printf("%d odd\n",i);
    }}
int main()
{
    int b;
    scanf("%d",&b);
    shownumbers(b);
}

