#include<stdio.h>
#include<string.h>
struct cricketer {
char name[50];
char country[50];
char type[10];
int wicket[30];
int runs[30];
int totalmatch;
float overallperformence;
}   ;
int main (){
struct cricketer p[100];
int i,j;
for (i=0;i<100;i++)
{
   printf("\nEnter details for Cricketer %d\n", i + 1);


    printf("name ");
    gets(p[i].name);

    printf("country ");
    gets(p[i].country);

    printf(" type ");
    gets(p[i].type);


    printf("total matches ");
    scanf("%d",&p[i].totalmatch);


    if(strcmp(p[i].type , "bowler")== 0)
    {
       int totalwickets = 0;
       printf("enter totalwicket in last 30 matches");
       for(j=0;j<30;j++)
       {
           scanf("%d",p[i].wicket[j]);
           totalwickets += p[i].wicket[j];
       }
       p[i].overallperformence = totalwickets / p[i].totalmatch;
    }
    else if(strcmp(p[i].type , 'batsman")== 0)
    {
       int totalruns = 0;
       printf("enter totalruns in last 30 matches");
       for(j=0;j<30;j++)
       {
           scanf("%d",p[i].runs[j]);
           totalruns += p[i].runs[j];
       }
       p[i].overallperformence = totalruns / p[i].totalmatch;
    }


}

int bestplayer = 0;
    for(i=0;i<100;i++)
    {
        if(p[i].overallperformence > p[bestplayer].overallperformence)
           {
                bestplayer = i;
           }
    }

 printf("\n Cricketer of the Year \n");

 printf("Name: %s\n", p[bestplayer].name);

    printf("Country: %s\n", p[bestplayer].country);

    printf("Type: %s\n", p[bestplayer].type);

    printf("Total Matches Played: %d\n", p[bestplayer].totalmatch);

    printf("Overall Performance Score: %.2f\n", p[bestplayer].overallperformence);

return 0;
}

