#include <stdio.h>
    int binary_search(int arr[], int size, int mid, int x)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x >= arr[mid])
        {
            return binary_search(arr, size, mid + 1, x);
        }
        else if (x <= arr[mid])
        {
            return binary_search(arr, size, mid - 1, x);
        }
        else
        {
            return -1;
        }
    }
    int main()
    {
        int arr[10] = {2, 5, 8, 22, 25};
        int size = 5;
        int mid = (size - 1) / 2;
        int x = 2;
        printf("%d", binary_search(arr, size, mid, x));
        return 0;
    }