#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{

    // printf("Merging from %d to %d\n", left, right);
    // for (int i = left; i <= right; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (j = 0; j < n2; j++)
        R[j] = arr[mid + j + 1];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    // for (int i = start; i <= end; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main()
{

    int n, i;
    printf("Enter the number of the elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);

    printf("Sorted Array : \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}