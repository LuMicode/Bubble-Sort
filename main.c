//bubbleSort
#include<stdio.h>

void swap(int *ap, int *bp){
    *ap = *ap + *bp;
	*bp = *ap - *bp;
	*ap = *ap - *bp;
}

//function to implement buuble Sort
void bubbleSort(int arr[], int size){
      int i,j;
      for(i = 0; i < size; i++){
            //last elements already in place
            for(j = 0; j < size-i-1; j++){
                  if(arr[j] > arr[j+1])
                        swap(&arr[j], &arr[j+1]);
            }
      }
}

//function to print array
void printArray(int arr[], int size){
      int i;
      for(i = 0; i < size ; i++){
              printf("%d ",arr[i]);
      }
}      
      
//main program      
int main(){      
      int arr[] = {12,23,56,1,1,50,80};
      int n = sizeof(arr)/sizeof(arr[0]);
      bubbleSort(arr,n);
      printf("Sorted array:\n");
      printArray(arr,n);
      return 0;
}
      
            


      
      
      
