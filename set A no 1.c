#include<stdio.h>

int main ()
{
    char str[100];
    printf("enter string = ");
    scanf("%s",str);

    removeallduplicate(str);

    cheakpalindrome(str);

    return 0;
}
void removeallduplicate(char str[])
{
    int i,j,k;
    for(i=0; str[i]!= '\0'; i++)
    {
        for(j=i+1; str[j] != '\0'; j++)
        {
            if (str[i]== str[j])
            {
                for(k=j; str[k] != '\0'; k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }

}
int getsize(char str[])
{
    int count =0;
    while (str[count] != '\0')
    {
        count ++;
    }
    return count;
}
void cheakpalindrome(char *str)
{
    int i = 0, j = getsize(str) - 1;
    int ispalindrome = 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            ispalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    printf("Modified String: %s\n", str);
    if (ispalindrome)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
}

