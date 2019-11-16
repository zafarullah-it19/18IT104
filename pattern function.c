/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int pattern(int a)
{
    for(int i=0;i<=a;i++)
    {for(int j=0;j<=i;j++)
    {printf("*");}
    printf("\n");}
}
int main()
{
    int j;
    scanf("%d",&j);
    pattern(j);
}

