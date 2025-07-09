#include<stdio.h>
void input_ct_marks(float a[],int n)
{
    for(int i =0;i<n;i++)
    {
        printf("ct %d",i+1);
        scanf("%f",&a[i]);
    }
}
float take_highest_ct(float arr[],int n)
{
   float highest = arr[0];
   for (int i =0;i<n;i++)
   {
       if(arr[i]> highest){
        highest = arr[i];
       }
   }
   return highest;
}

int main (){
int n;
scanf("%d",&n);
float arr[100];

input_ct_marks(arr,n);
float highest = take_highest_ct(arr,n);
printf("high %f",highest);
return 0;
}
