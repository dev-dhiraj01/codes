#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 50, 30, 70, 90, 80, 60, 8, 9, 5, 6, 4, 3, 2, 1};
    int n = 15;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}