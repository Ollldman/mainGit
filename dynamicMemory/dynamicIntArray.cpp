#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int **p;
    int i,j,m,n;
    srand(time(0));
    cout<<"Enter number of string: ";
    cin>>m;
    cout<<"And now, enter number of column: ";
    cin>>n;
    p = new int*[n];
    for (i = 0; i<m;i++){
        p[i] = new int[n];
        for(j=0;j<n;j++){
            p[i][j] = rand() %10;
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++) delete [] p[i];
    delete [] p;
return 0;
}