#include <iostream>
#include <cstring>
using namespace std;

void merge(char arr[], int low, int mid, int high){

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

void mergesort(char arr[], int low, int high){
	// IMP: don't forget the base condition
	if(low < high){
		int mid = (low + high)/2;

		mergesort(arr, low, mid);
		mergesort(arr, mid+1, high);

		merge(arr, low, mid, high);
	}
}

// bool has an int value i.e. false is 0 and true is 1
bool isUnique(char str[], int size){
	if(strlen(str)>128)
		return false;

	mergesort(str, 0, size);

	for(int i = 0; i < size - 1; i++){
		if(str[i] == str[i+1]){
			return false;
		}
	}
	return true;
}

/*int main(){
	char str[] = "Helo";
	cout << isUnique(str, 5);
}*/
