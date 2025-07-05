#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int id ;
    float marks;
    char email[50];
};
int main()
{
    struct student s[3];
    float sum=0,avg;
    int i,min_index=0;

    for(i=0; i<3; i++)
    {
        printf("\nstudent : %d \n",i+1);

        printf("name : ");
        gets(s[i].name);

        printf("id : ");
        scanf("%d",&s[i].id);

        printf("marks : ");
        scanf("%f",&s[i].marks);

        printf("email : ");
        gets(s[i].email);

        sum += s[i].marks;

        if(s[i].marks < s[min_index].marks)
        {
            min_index = i;
        }
    }
    avg = sum/3;
    printf("AVG : %.2f\n",avg);

    printf("\nStudent with minimum number \n");
           printf("%s\n",s[min_index].name);

           printf("%d\n",s[min_index].id);

           printf("%.2f\n",s[min_index].marks);

           printf("%s\n\n",s[min_index].email);

           printf("All Student Details\n");


           for(i=0; i<3; i++)
{
    printf("\nstudent : %d",i+1);
        printf("%s\n",s[i].name);

        printf("%d\n",s[i].id);

        printf("%.2f\n",s[i].marks);

        printf("%s\n",s[i].email);
    }

    return 0;
}

