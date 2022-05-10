#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("Enter the element between '0' to '9'\n");
    scanf("%d", &element);
    int result = linearSearch(arr, size, element);

    printf("The value of %d element is at index %d", element, result);

    return 0;
}