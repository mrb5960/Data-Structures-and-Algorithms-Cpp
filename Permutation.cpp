#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(string s1, string s2){
	if(s1.length() != s2.length())
		return false;

	int occ[128];
	// while comparing with string length always declare iterating variable
	// as std::string::size_type
	for(std::string::size_type i = 0; i < s1.length(); i++){
		// warning: array subscript has type char
		// if temp is declared as char
		int temp = s1[i];
		occ[temp] += 1;
	}
	for(std::string::size_type i = 0; i < s1.length(); i++){
			int temp = s2[i];
			occ[temp] -= 1;
			if(occ[temp] < 0)
				return false;
	}

	for(int i = 0; i < 128; i++)
		if(occ[i] > 0)
			return false;

	return true;
}

int main(){
	string s1 = "helll";
	string s2 = "olleh";
	cout << isPermutation(s1,s2) << endl;
	return 0;
}
