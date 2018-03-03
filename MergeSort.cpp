#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){

	// calculate length of temp arrays
	int l = mid - low + 1;
	int r = high - mid;

	// create temp arrays
	int left[l], right[r];


	// copy elements in temp arrays
	for(int i = 0; i < l; i++){
		left[i] = arr[low + i];
	}
	for(int j = 0; j < r; j++){
		right[j] = arr[mid + 1 + j];
	}

	int i = 0, j = 0, k = low;

	// merge two sorted arrays
	while(i < l && j < r){
		if(left[i] > right[j]){
			arr[k] = right[j];
			j++;
		}
		else{
			arr[k] = left[i];
			i++;
		}
		k++;
	}

	//copy the remaining elements
	while(i < l){
		arr[k] = left[i];
		i++;
		k++;
	}

	while(j < r){
		arr[k] = right[j];
		j++;
		k++;
	}
}

void mergesort(int arr[], int low, int high){
	// IMP: don't forget the base condition
	if(low < high){
		int mid = (low + high)/2;

		mergesort(arr, low, mid);
		mergesort(arr, mid+1, high);

		merge(arr, low, mid, high);
	}
}

/*void printArray(int arr[], int size){
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << size << endl;
	printArray(arr, size);
	mergesort(arr, 0, size);
	printArray(arr, size);
	return 0;
}*/
