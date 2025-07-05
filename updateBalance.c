#include<stdio.h>

void updateBalance(int a,int b,float c,float balance[]);

int main ()
{
    float balance[100];
    int n,id,type;
    float amount;

    printf("number of customer = ");
    scanf("%d",&n);

   printf ("enter currunt balance : \n");
    for (int i=1; i<=n; i++)
    {
        printf("customer %d = ",i);
        scanf("%f",&balance[i]);
    }

    printf("\nEnter Customer ID: ");
    scanf("%d", &id);
    printf("Enter Transaction Type (1 = Withdraw, 2 = Deposit): ");
    scanf("%d", &type);
    printf("Enter Amount: ");
    scanf("%f", &amount);


    updateBalance(id,type,amount,balance);

    printf("\n\ncustomer no : %d ; \nUpdate Balance : %f \n",id,updateBalance);

    return 0;
}
void updateBalance(int a,int b,float c,float balance[])
{
    if(b==1)
    {
        if(balance[a]<c)
        {
            printf("not sufficiant balance ");
        }
        else
        {
            balance[a] -= c;
        }
    }
    else(b==2);
    {
        balance[a] += c;
    }
}
