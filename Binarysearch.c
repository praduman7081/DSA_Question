#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, x = 0, mid, beg, end, *arr, key, i;
	printf("Enter the size of array\n");
	scanf("%d", &n);
	arr = (int *)malloc(n * sizeof(int));
	printf("Enter the elements of array");
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	printf("Enter the item to Search\n");
	scanf("%d", &key);
	beg = 0;
	end = n;
	while (beg <= end)
	{
		mid = (beg + end) / 2;
		if (*(arr + mid) == key)
		{
			printf("key found at index %d", mid);
			x = 1;
			break;
		}
		else if (*(arr + mid) > key)
		{
			end = mid - 1;
		}
		else
		{
			beg = mid + 1;
		}
	}
	if (x != 1)
	{
		printf("key not found");
	}
	return 0;
}
