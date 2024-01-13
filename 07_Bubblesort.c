#include <stdio.h>
void printArr(int* arr, int size){
   for (int i = 0; i < size; i++)
   {
      printf("%d \n",arr[i]);
   }
   
}
void bulleSort(int* arr, int size){
    for (int i = 0; i < size - 1; i++)
    {
        int issorted=1;
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                //swap elements
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted = 0;
            }   
        } 
        if (issorted==1)
        {
            return; 
        }
          
    }  
}

int main(){
    int a[]={12,30,21,15,19,17};
    int n=sizeof(a)/sizeof(int);
    printArr(a,n);
    bulleSort(a,n);
    printf("Sorted arry :");
    printArr(a,n);
    return 0;
}