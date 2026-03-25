#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 50, 30, 70, 90, 80, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int j;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];

        for ( j = i-1; j >= 0 ; j--)
        {
            if(arr[j] >temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}