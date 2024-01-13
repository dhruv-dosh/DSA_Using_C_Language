#include <stdio.h>
void printArr(int* arr, int size){
   for (int i = 0; i < size; i++)
   {
      printf("%d \n",arr[i]);
   }
   
}
void selectionSort(int* arr, int size){
    for (int i = 0; i < size-1; i++)
    {
     int indexmin = i;
     for (int j = i+1; j < size; j++)
     {
        if (arr[indexmin]>arr[j])
        {
            indexmin = j;
        }
        
     }
     int temp = arr[i];
     arr[i] = arr[indexmin];
     arr[indexmin]= temp;
        
    }
    
    
}

int main(){
    int a[]={12,30,21,15,19,17};
    int n=sizeof(a)/sizeof(int);
    printArr(a,n);
    selectionSort(a,n);
    printf("Sorted arry :");
    printArr(a,n);
    return 0;
}