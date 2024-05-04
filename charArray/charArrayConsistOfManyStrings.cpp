#include <iostream>
#include <cstdio>
using namespace std;

void stringIn(char *str1, char *str2, int n){
//searching position in array for string recording:
//phrase !(*str1) returns true if str1 contains a symbol.
//if(str1){...} will be work, when str1 not contains '\0' or empty
	while(n!=0){
		if(!(*str1)) n--;

		str1++;
	}

}

int main(){

}
