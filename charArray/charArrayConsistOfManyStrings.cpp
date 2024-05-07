#include <iostream>
#include <cstdio>
using namespace std;

void stringIn(char *str1, char *str2, int n){
//searching position in array for string recording:
//expression !(*str1) returns false if *str1 is a symbol.
//if(*str1){...} - will be work, when str1 not contains '\0' or empty.
	cout<<"Array in stringIn(): "<<str2<<" and n: "<<n<<"\n";
	while(n!=0){
		if(!(*str1)) n--; //null-symbol will decrease n and we go to next part of str;
		str1++;           //go to next element of array str with step - char;
		cout<<"Thats time in while loop: "<<str1<<"\n";
	}
//record string in array:
	while(*str2){
		*str1 = *str2;
		str1++;
		str2++;
	}
*str1 = '\0'; //record zero-symbol in the end string of array.
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
	int n;
    char str[120];		
    char s [30];
    cout<<"Input your three  strings:\n";
    for (n =0; n<3;n++){
    	cout<<"Enter your string: \n";
    	fgets(s,30,stdin);
    	stringIn(str,s,n);
    	cout<<"\n";
    }
    stringIn(str,(char*)"One more string",3); //This text is used as a char array;
//Output results:
    for (n=0;n<=3; n++)
    	stringOut(str,n);
    return 0;
}
