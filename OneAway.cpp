#include <iostream>
#include <cstdlib>
using namespace std;

bool isOneReplace(char str1[], char str2[], int size){
	int oneReplace = 0;

	for(int i = 0; i < size; i++){
		if(str1[i] == str2[i]){
			continue;
		}
		oneReplace++;
		if(oneReplace > 1)
			return false;
	}
	return true;
}

bool isOneInsert(char str1[], char str2[], int size){
	int i = 0, j = 0;
	int insert_count = 0;
	while(i < size){
		if(str1[i] != str2[j] && insert_count <=1){
			j++;
			insert_count++;
			continue;
		}
		i++;
		j++;
		if(insert_count > 1)
			return false;
	}
	return true;
}

bool isOneAway(char str1[], int size1, char str2[], int size2){
	if(abs(size1 - size2) > 1)
		return false;

	if(size1 == size2){
		return isOneReplace(str1, str2, size1);
	}

	if(size1 > size2){
		return isOneInsert(str2, str1, size2);
	}
	else
		return isOneInsert(str1, str2, size1);

	return false;
}


/*int main(){
	char str1[] = "pale";
	char str2[] = "bale";
	cout << isOneAway(str1, 4, str2, 4);
	return 0;
}*/
