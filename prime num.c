#include<stdio.h>
int main (){
int i,n,flag=1;
printf("enter the value : ");
scanf("%d",&n);
if(n==0 || n==1)flag=0;
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
        flag =0;
        break;
    }
}
if(flag==1)printf("%d is prime\n",n);
else printf("%d is not prime\n",n);

return 0;
}
