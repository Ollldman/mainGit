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
//creating array of pointer strings:
    p = new int*[n];
    for (i = 0; i<m;i++){
//creating dynamic memory for strings of array
        p[i] = new int[n];
        for(j=0;j<n;j++){
            p[i][j] = rand() %10;
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
//for loop deleting adresses of first cells of memory srings:
    for(i=0;i<n;i++) delete [] p[i];
//next step - deleting adress cells memory array of pointer
    delete [] p;
return 0;
}
