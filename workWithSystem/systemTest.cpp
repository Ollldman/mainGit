#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int **p;
    int i,j,m,n;
    srand(time(0));
    cout<<"At first, i need to show you table of random push ups: \n";
    cout<<"Enter number of string(more 5): ";
    cin>>m;
    cout<<"And now, enter number of column(more then 5): ";
    cin>>n;
    p = new int*[n];
    for (i = 0; i<m;i++){
        p[i] = new int[n];
        for(j=0;j<n;j++){
            p[i][j] = rand() %10;
            cout<<p[i][j]<<" ";
        }
        cout<<"<"<<i+1<<"class."<<endl;
    }
    for(i=0;i<n;i++) delete [] p[i];
    delete [] p;
	system("make main"); //easely way - just run makefile with full script process.
	/* 
	system("sublime_text \"C:\\Users\\dodro\\Documents\\Programms\\c++\\mainGit\\main.cpp\" & wt");
	 //run terminal after close sublime_text.
	*/
	return 0;
}