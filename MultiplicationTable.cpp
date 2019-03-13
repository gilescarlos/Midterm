#include<stdio.h>

int main()
{
    int row, column;
    printf("Enter Size of Multiplication Table: ");
    scanf(" %d", &row);
    column = row;

    printf("\nMultiplication table from 1 to %d \n\n", row);
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= column; j++)
            printf("%5d",i * j);
        printf("\n");
    }

    return 0;
}