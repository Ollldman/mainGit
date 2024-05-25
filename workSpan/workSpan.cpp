#include <span>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
    vector <int> b {2,13,16,3,19,5};
    string a {"CghTeper"};
    int c[]{13,4,18,2,15};
    span <int> mySpan(b);
    span <char> spin(a);
    span <int> my2Span(c);
    cout<<mySpan.back()<<endl;
    cout<<spin.back()<<endl;
    cout<<my2Span.back()<<endl;
    return 0;
}
