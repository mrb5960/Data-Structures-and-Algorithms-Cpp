#include <iostream>
using namespace std;

int getPartition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low - 1;

	for(int j = low; j < high; j++){
		if(arr[j] <= pivot){
			i++;
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	i++;
	int temp = arr[i];
	arr[i] = arr[high];
	arr[high] = temp;

	return i;
}

void quicksort(int arr[], int low, int high){
	if(low < high){
		int partition = getPartition(arr, low, high);

		quicksort(arr, low, partition-1);
		quicksort(arr, partition+1, high);
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
	quicksort(arr, 0, size);
	printArray(arr, size);
	return 0;
}*/
