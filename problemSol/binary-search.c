#include <stdio.h>

int binarySearch(int target, int left, int right, int *arr);

int main(int argc, char ** argv){

  int arr[] ={ 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};

  size_t size = sizeof(arr)/sizeof(arr[0]);

  printf("%d", binarySearch(8 , 0 , size -1 , arr));


  return 0;
}


int binarySearch(int target, int left, int right, int *arr){
  int middle = (left + right)/2;

  if(arr[middle] == target){
    printf("inside first if\n");
    return middle;
  }
  else if(target > arr[middle]){
    return binarySearch(target, middle +1 , right , arr);
  }
  else {
    return binarySearch(target , left , middle -1 , arr);
  }
  return middle;
}
