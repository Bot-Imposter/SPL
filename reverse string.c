#include<stdio.h>
#include<string.h>
int main (){
char str[50];
printf("enter the string \n");
gets(str);
printf("size of the string \n");
int size=0;
int i=0;
while(str[i]!='\0')
{
  size++;
  i++;
}
printf("string size = %d \n",size);
printf("reverse the string \n");
for(int i=0,j=size-1;i<=j;i++,j--)
{
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;

}
puts(str);
return 0;
}
