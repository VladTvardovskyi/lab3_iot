#include<stdio.h>
#include<math.h>
#define size 5
void sortRow(int array[]);
void sortArrayOfRows(int array[size][size]);
int main()
{
    int row, column;
    int array[size][size];
    for (row = 0; row < size; row++)
    {
        for (column = 0; column < size; column++)
        {
            array[row][column] = rand() % 20;
            printf("a[%d][%d] = %d\n ", row + 1, column + 1, array[row][column]);
            
        }
        printf("\n");
    }
    printf("\nold matrix\n");
    for (row = 0; row < size; row++)
    {
        for (column = 0; column < size; column++)
            printf("%5d", array[row][column]);
        printf("\n");
    }
    sortArrayOfRows(array);
    printf("\n new matrix\n");
    for (row = 0; row < size; row++)
    {
        printf("[%d]:",row);
        for (column = 0; column < size; column++)
        {
            printf("%5d", array[row][column]);
        }
        printf("\n");
    }
    printf("\n");
    int sum = 0;
    
    for (int column = size - 1; column > 0; column--)
    {
        int multiplication = 1;
        for (int row = size - column; row < size; row++)
        {
            multiplication *= array[row][column];
        }
        printf("<<%d>>\n",multiplication);
        sum += multiplication;
    }
    printf("%f\n", sum / (size - 1.0));
    return 0;
}
void sortRow(int array[]) 
{
    for (int min = 0; min < size; min++)
        for (int max = 0; max < size; max++)
            if (array[min] < array[max]) 
            {
                int temp = array[min];
                array[min] = array[max];
                array[max] = temp;
            }
}
void sortArrayOfRows(int array[size][size]) 
{
    for (int row = 0; row < size; row++)
        sortRow(array[row]);
}
