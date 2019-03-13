#include<stdio.h>

int main()
{
    int row, column;
    printf("Enter Size of Multiplication Table: ");
    scanf(" %d", &row);
    column = row;

    printf("\nMultiplication table from 1 to %d \n\n", row);

    printf("\t  ");
    for(int i = 1; i <= row; i++) {
        printf("%4d ", i);
    }
    printf("\n");

    printf("    +");
    for(int i = 1; i <= row; i++) {
        printf("-----");
    }
    printf("\n");


    for(int i = 1; i <= row; i++) {
        printf("%d\t|", i);

        for(int j = 1; j <= column; j++) {
            printf("%5d", i * j);
        }
        printf("\n");
    }

    return 0;
}