#include <stdio.h>
int binarySearching(int arr[], int size, int element)
{
    int low = 0;
    int high = arr[size - 1];
// keep searching until low <= high
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == element)
            return mid;
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    //Sorted Array
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("Enter the element between '0' to '9'\n");
    scanf("%d", &element);
    binarySearching(arr, size, element);
    int result = binarySearching(arr, size, element);

    printf("The value of %d element is at index %d", element, result);

    return 0;
}
//  low , high , mid
//  low = 0
//  high = size -1
//  mid = (low+high)/2
// if mid == element
// return
// if mid>element
// high = size -1