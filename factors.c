#include<stdio.h>
void main()
{
int i,num;
printf("enter a number:");
scanf("%d",&num);
printf("factors of %d ; ",num);
for(i=1;i<=num;i++)
{
if(num%i==0)
printf("%d  ",i);
}
}
