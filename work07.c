#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printArr (int* arr, int length){
	int i;
	printf("[ ");
	for (i = 0; i < length; i++) {
      printf("%d ", *(arr+i));
   }
   printf(" ] \n");
}

double avgArr (int* arr, int length) {
	int i;
	int sum = 0;
	for (i = 0; i < length; i++) {
      sum += *(arr+i);
   }
   return sum / length;
}

void copyArr (int* arr, int* arr2, int length) {
	int x;
   for (x = 0; x < 10; x++) {
      *(arr2+x) = *(arr+x);
   }
} 

int main() {
	int arr[10];
	int arr2[10];
	
   int i;
   for(i = 0; i < 10; i++) {
      arr[i] = i;
      arr2[i] = i+2;
   }
   printf("1.\n");
   printArr(arr, 10);
   printf("\n");
   
   printf("2.\n");
   printf("%0.3lf \n", avgArr(arr, 10));
   printf("\n");
   
   printf("3.\n");
   printf("Before copy:\n");
   printArr(arr, 10);
   printArr(arr2, 10);
   printf("After copy:\n");
   copyArr(arr, arr2, 10);
   printArr(arr, 10);
   printArr(arr2, 10);
}



