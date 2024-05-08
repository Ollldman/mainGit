#include <iostream>
using namespace std;
//Some specific with char array like string
int main(){
    const char *p,*q; //const pointers on char-type variables
    p = "Hello world";
    q = "Hello world"+7; //all operations ++ or +2 or +7 just do steps in position.
    //"text"+2 = "xt" for pointers. because we have step char-value.
    cout<<p<<endl;  //Hello world
    cout<<q<<endl;  //orld
    cout<<*p<<endl; //H
    p++; //we go +1 step about phrase "Hello world" and p = "ello world";
    cout<<*p<<endl; //e
    cout<<p<<endl; //ello world
    return 0;
}