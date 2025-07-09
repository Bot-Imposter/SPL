/*#include<stdio.h>
int main (){
printf("enter the row ");
int row;
scanf("%d",&row);
printf("enter the collumn ");
int col;
scanf("%d",&col);
int i,j,k;
int matrix[row][col];
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&matrix[i][j]);
    }
    printf("\n");
}
for(j=0;j<col;j++)
{
    for(i=0,k=row-1;i<k;i++,k--)
    {
        int temp = matrix[i][j];
        matrix[i][j]=matrix[k][j];
        matrix[k][j]=temp;
        printf("%d",temp);
    }
printf("\n");
}

/*printf("revarse \n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d",&matrix[i][j]);
    }
    printf("\n");
}
return 0;
}*/
#include <stdio.h>

int main() {
    int rows = 3, cols = 4;

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Reverse each row (side-wise)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols - 1 - j];
            matrix[i][cols - 1 - j] = temp;
        }
    }

    // Print reversed matrix
    printf("\nMatrix After Side-Wise Reversal:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
