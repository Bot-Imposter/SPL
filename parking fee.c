#include<stdio.h>
int main(){
int hours,fee;
scanf("%d",&hours);
if(hours<=1)
{
    fee==0;
}
else if(hours>1 && hours<=5)
{
    fee=(hours-1)*20;
}
else if(hours>5 && hours<=6)
{
    fee=(4*20)+(hours-5)*30;
}
printf("%d",fee);

return 0;
}
