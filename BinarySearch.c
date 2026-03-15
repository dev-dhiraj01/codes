#include <stdio.h>

int main()
{

    int n, start, end, target;

    printf("Enter the number number of the elements : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the elements to search: ");
    scanf("%d", &target);

    start = 0;
    end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            printf("Element present at position %d ", mid + 1);
            return -1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    printf("Element is not present in array. ");

    return 0;
}