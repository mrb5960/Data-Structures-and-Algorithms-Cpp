#include <iostream>
using namespace std;

void insertionsort(int arr[], int size){
	for(int i = 0; i < size; i++){
		int key = arr[i];
		int j = i-1;

		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		j++;
		arr[j] = key;
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
	insertionsort(arr, size);
	printArray(arr, size);
	return 0;
}*/
