#include<stdio.h>

/*utility function to print array*/
void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

/*implementing insertion sort with swapping- steven skeina*/
void insertionSortWithSwap(int arr[], int n){

printf("Sorting array of size %d\n", n);

	int i, j, temp;
	for(i=1; i<n; i++){
		for(j = i; j>0; j--){
			if(arr[j] < arr[j-1]){
				/*swap*/
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
}

/*implementing insertion sort without swapping - true insertion*/
void insertionSortWithoutSwap(int arr[], int n){

printf("Sorting array of size %d", n);

	int i,j,curr;
	for(i=1; i<n; i++){
		curr = arr[i];
		for(j=i-1; j>=0 && arr[j] > curr; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = curr;
	}
}

int main(){
	int arr[] = {22, 1, 16, 7, 8, 42, 19, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
				
	/*sorting array*/
	insertionSortWithoutSwap(arr, n);

	/*printing sorted array*/
	printArray(arr, n);

	return 0;
}
