#include <iostream>
using namespace std;

void selectionsort(int arr[], int size){
	for(int i = 0; i < size - 1; i++){
		int min_index = i;
		for(int j = i; j < size; j++){
			if(arr[j] < arr[i]){
				min_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
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
	selectionsort(arr, size);
	printArray(arr, size);
	return 0;
}*/
