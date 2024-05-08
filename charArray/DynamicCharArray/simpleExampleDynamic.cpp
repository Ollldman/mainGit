#include <iostream>
#include <cstdlib>
using namespace std;

int main(){	
	char *p;
	int n,i=0;
	cout<<"Enter of number symbols in string: ";
	cin>>n;
//here should used try-catch operation from library #include<new>
	n = (const int)n;
	p = new char[n];
	p[n] = '\0';
	cout<<"Enter the string: ";
//fgets(p,n,stdin); compiling,but not work. We using getchar().
//and do/while loop;
    do {
//getchar() using  
        p[i]=getchar();
        i++;    
    }
    while (i<n);
	for(int i =0;p[i];p[i]=toupper(p[i]), i++);
	cout<<p<<endl;
	delete [] p;
	cout<<endl;
	return 0;
}
