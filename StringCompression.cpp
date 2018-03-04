#include <iostream>
#include <cstring>
using namespace std;

int getNewLength(char str[], int size){
	int count = 0;
	for(int i = 0; i < size - 1; i++){
		if(i+1 >= size - 1 || str[i] != str[i+1]){
			count += 2;
		}
	}
	return count;
}

char *getCompressedString(char str[], int size){

	int newLength = getNewLength(str, size);
	if(newLength > size)
		return str;


	char *out = new char[newLength + 1];
	int count = 0;
	int out_index = 0;
	for(int i = 0; i < size - 1; i++){
		count++;
		if(i+1 >= size - 1 || str[i] != str[i+1]){
			out[out_index] = str[i];
			out[out_index + 1] = '0' + count;
			out_index += 2;
			count = 0;
		}
	}
	return out;
}

int main(){
	char str[] = "aabcccccaaa";
	int size = sizeof(str)/sizeof(str[0]);
	cout << "size " << size << endl;
	char *out = getCompressedString(str, size);
	int i = 0;
	while(out[i] != '\0'){
		cout << out[i];
		i++;
	}
	return 0;
}
