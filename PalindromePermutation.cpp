#include <iostream>
using namespace std;

bool isPP(char str[], int size){
	// convert to lowercase
	for(int i = 0; i < size; i++){
		str[i] = tolower(str[i]);
	}

	// if array is not initialized, you will have garbage values as default insted of '0'
	int occ[26] = {};



	for(int i = 0; i < size; i++){
		if(97 <= str[i] && str[i] <= 122){
			int index = str[i] - 97;
			occ[index] += 1;
		}
	}

	int ones = 0;

	for(int i = 0; i < 26; i++){
		if(occ[i] % 2 != 0){
			ones++;
		}
		if(ones > 1)
			return false;
	}

	return true;
}

int main(){
	char str[] = "Tact coa";
	cout << isPP(str, 9) << endl;
	return 0;
}
