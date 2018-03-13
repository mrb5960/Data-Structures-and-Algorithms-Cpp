//============================================================================
// Name        : New.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

char *getCompressedString1(char *str){
	char *out = new char[10];
	for(int i = 0; i < 9; i++){
		out[i] = 'a';
	}
	out[9] = '\0';

	return out;
}

char *getCompressedString2(char str[], int size){
	char *out = new char[11];
	char out1[11] = {};
	for(int i = 0; i < size; i++){
		out1[i] = str[i];
		cout << out1[i] << endl;
	}
	cout << sizeof(out1)/sizeof(out1[0]);
	return out;
}

void swap(int& x, int& y);

/*int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;

   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

    calling a function to swap the values.
   swap(a, b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;

   return 0;
}*/

// function definition to swap the values.
void swap(int& x, int& y) {

   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}
/*int main(){
	char str[] = "aabcccccaaa";
	char *out = getCompressedString(str);
	int i = 0;
	while(out[i] != '\0'){
		cout << out[i];
		i++;
	}
	return 0;
}*/
