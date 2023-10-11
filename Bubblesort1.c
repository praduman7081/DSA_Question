#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, *arr, j, i, temp;
	printf("Enter the size of array\n");
	scanf("%d", &n);
	arr = (int *)malloc(n * sizeof(int));
	printf("Enter the elements of array");
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	printf("Sorting arrays---\n");
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(arr + i));
	}
	return 0;
}
