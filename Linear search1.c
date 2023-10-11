#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, item, i, *arr, x = 1;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the item to Search\n");
    scanf("%d", &item);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
        if (*(arr + i) == item)
        {
            x = 0;
            printf("Element found at index %d", i);
            break;
        }
    }
    if (x == 1)
    {
        printf("Element not found");
    }
    return 0;
}
