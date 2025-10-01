#include <stdio.h>
// int linearsearch(int arr[], int size, int search)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == search)
//         {
//             printf("Element found at index number :%d", i + 1);
//         }
//     }
// }

int binarySearch(int arr[], int size, int search)
{
    int low, mid, high;
    low = 0;
    high = size-1 ;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == search)
        {
            return mid;
        }
        if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    printf("Enter the data in your array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ser;
    printf("Enter element to search: ");
    scanf("%d", &ser);

    // linearsearch(arr, n, ser);
    int index = binarySearch(arr, n, ser);

    printf("Element found at index :%d",index);
    return 0;
}