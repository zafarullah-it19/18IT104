#include<stdio.h>
void main()
{
int a[100],n;
printf("enter no.of elements:");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (int i=n-1;i>=0;i--)
{
printf("%d",a[i]);
}
}
