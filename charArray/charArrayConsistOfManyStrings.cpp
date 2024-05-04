#include <iostream>
#include <cstdio>
using namespace std;

void stringIn(char *str1, char *str2, int n){
//searching position in array for string recording:
//phrase !(*str1) returns true if str1 contains a symbol.
//if(str1){...} will be work, when str1 not contains '\0' or empty.
	while(n!=0){
		if(!(*str1)) n--;
		str1++;
	}
//record string in array:
	while(*str2){
		*str1 = *str2;
		str1++;
		str2++;
	}
*str1 = '/0'; //record zero-symbol in the end of string of array.
}

void stringOut(char *str, int n){
//this func boost output string from array, using 
//the contents of the string and index n of place;
	while(n!=0){
		if(!(*str)) n--;
		str++;
	}
	cout<<str<<endl;
}

int main(){
	
}
