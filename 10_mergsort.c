#include <stdio.h>
void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
}
void merg(int arr[], int mid, int low, int high)
{
    int i, j, k, brr[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
        while (i <= mid)
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        while (j <= high)
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    
    
    for (int i = low; i <= high; i++)
    {
        arr[i] = brr[i];
    }
}

void mergSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergSort(arr, low, mid);
        mergSort(arr, mid + 1, high);
        merg(arr, mid, low, high);
    }
}
int main()
{
    int a[] = {12, 30, 21, 15, 19, 17};
    int n = sizeof(a) / sizeof(int);
    printArr(a, n);
    mergSort(a, 0, 5);
    printf("Sorted arry :");
    printArr(a, n);
    return 0;
}