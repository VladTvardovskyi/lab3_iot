#include<stdio.h>
#include<math.h>
void sort(int a[], int size);
void sort_matrix(int a[5][5]);
void main()
{
	int i, j;
	int a[5][5];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = rand() % 20;
			printf("a[%d][%d] = %d\n ", i + 1, j + 1, a[i][j]);
			
		}
		printf("\n");
	}
	printf("\nold matrix\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	sort_matrix(a);
	printf("\nnew matrix\n");
	for (i = 0; i < 5; i++)
	{
		printf("[%d]:",i);
		for (j = 0; j < 5; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int sum = 0;
	
	for (int j = 5 - 1; j > 0; j--)
	{
		int dob = 1;
		for (int i = 5 - j; i < 5; i++)
		{
			dob *= a[i][j];
		}
		printf("<<%d>>\n",dob);
		sum += dob;
	}
	printf("%f", sum / (5 - 1.0));
	getchar();
}
void sort(int a[], int size) 
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (a[i] < a[j]) 
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
void sort_matrix(int a[][5]) 
{
	for (int i = 0; i < 5; i++)
		sort(a[i], 5);
}
