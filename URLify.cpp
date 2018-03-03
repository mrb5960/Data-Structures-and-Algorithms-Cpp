#include <iostream>
using namespace std;

int urlify(char str[], int size){
	int spaces = 0, i;
	for(i = 0; str[i]; i++){
		if(str[i] == ' ')
			spaces++;
	}

	while(str[i - 1] == ' '){
		spaces--;
		i--;
	}

	int new_length = i + spaces * 2 + 1;
	int index = new_length - 1;

	str[index--] = '\0';

	for(int j = i - 1; j > 0; j--){
		if(str[j] == ' '){
			str[index] = '0';
			str[index - 1] = '2';
			str[index - 2] = '%';
			index = index - 3;
		}
		else{
			str[index] = str[j];
			index = index - 1;
		}
	}

	return new_length;
}

/*int main(){
	char str[] = "Mr John Smith          ";
	cout << sizeof(str)/sizeof(str[0]) << endl;
	int new_length = urlify(str, 13);
	for(int i = 0; i < new_length; i++)
		cout << str[i];
	return 0;
}*/
