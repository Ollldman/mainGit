#include <iostream>
#include <cstring> //for strcpy(s1,s2) strcat(s1,s2) strcmp(s1,s2) strchr(s1,'ch') strstr(s1,s2)
#include <cstdlib> //for atoi(s) atol(s) atof(s)
#include <cctype> //for tolower(ch) toupper(ch)
using namespace std;

int main(){
    char a[]{"hello world"};
    char b[]{"nest"};
    char a1[]{"Hello world"};
    char a2[]{"world"};
    char b1[]{"nest"};
    char d1[]{"13.3"};
    char d[]{"5"};
    char l[]{"133334434232141"};
    char *chr = strchr(a,'e');
    int c = 3;
    double r = 2.56;
    cout<<"Copy b in a: strcpy(a,b) = "<<strcpy(a,b)<<endl;
    cout<<"Adding b with a: strcat(a,b) = "<<strcat(a,b)<<endl;
    cout<<"Comparison a and b: strcmp(a,b) = "<<strcmp(a,b)<<endl;
    cout<<"Comparison equal string strcmp(b1,b) = "<<strcmp(b1,b)<<endl;
//just pointer *chr = strchr(a,'e') returns something like: estnest.
//because of this we used formula: chr-a+0 - thas returns index of position.
    cout<<"Pointer at first pos: 'e'(exmpl) in a strchr(a,'e') = "<<(chr-a+0)<<endl;
    cout<<"Pointer at first pos sustring a2 in a1: strstr(a1,a2) = "<<(strstr(a1,a2) - a1+0)<<endl;
    cout<<"Return int number from char: atoi(d)= "<<atoi(d)<<endl;
    cout<<"atoi(d) + c = "<<atoi(d)+c<<endl;
    cout<<"Return long type from char: atol(l) = "<<atol(l)<<endl;
    cout<<"Return double type from char: atof(d1) = "<<atof(d1)<<endl;
    cout<<"atof(d1) + r = "<<atof(d1)+r<<endl;
//for tolower() and toupper() need casting type (char) because they return int in ASCII table;
    cout<<"'R' to lowercase format: (char)tolower('R') = "<<(char)tolower('R')<<endl;
    cout<<"'r' to uppercase format: (char)toupper('r') = "<<(char)toupper('r')<<endl;
    return 0;
    
}