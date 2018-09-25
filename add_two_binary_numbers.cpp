#include<stdio.h>
int main()
{
long int n1,n2,r=0,sum[50];
int n,i=0;
printf("\n\n Enter First Binary Number: ");
scanf("%ld",&n1);
printf("\n\n Enter Second Binary Number: ");
scanf("%ld",&n2);
while (n1!=0 || n2!=0)
{
sum[i++]=(n1%10+n2%10+r)%2;
r=(n1%10+n2%10+r)/2;
n1=n1/10;
n2=n2/10;
}
if(r!=0)
sum[i++]=r;
printf("\n\n Sum of two binary numbers: ");
for(i=i-1;i>=0;i--)
printf("%d",sum[i]);
return 0;
}
