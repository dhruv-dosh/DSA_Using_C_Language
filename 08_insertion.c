#include <stdio.h>
void printArr(int* arr, int size){
   for (int i = 0; i < size; i++)
   {
      printf("%d \n",arr[i]);
   }
   
}
void insertionSort(int* arr, int size){
    for (int i = 1; i <= size-1; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]> key)
        {
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1]=key;
    }
     
}

int main(){
    int a[]={12,30,21,15,19,17};
    int n=sizeof(a)/sizeof(int);
    printArr(a,n);
    insertionSort(a,n);
    printf("Sorted arry :");
    printArr(a,n);
    return 0;
}