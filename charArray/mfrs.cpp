#include <iostream>
using namespace std;

int main(){
	char str[120];
	char s [30] = {"Hello world"};
	for (int i =0; i<30; i++){
		str[i] = s[i];
	}
	str[30] = '\0';
	cout<<str<<endl; //here we get a symbols in s array
	for(int i = 0; i<30; i++){
		str[30+i] = s[i];
}
	str[60] = '\0';
	cout<<str<<endl; //here we get too but after 30 index we have 
	                 //a symbols after '\0' and this not output 
	cout<<"str from for loop: \n";
	for(int i =0; i<60;i++){
		cout<<str[i]; // this output return all contents in str;
	}
	return 0;
}