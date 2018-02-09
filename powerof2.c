#include<stdio.h>
int main()
{
int n,k;
scanf("%d%d",&n,&k);
k=1;
for(i=1;i<=5;i++)
{
k=k*2;
break;
}
if(k==n)
{
printf("yes the num is power of two");
}
else
{
printf("no the num is power of two");
}
return 0;
}
