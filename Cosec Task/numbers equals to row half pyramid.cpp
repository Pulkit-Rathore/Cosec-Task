#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"how many rows you want";
    cin>>r;
    for(int i=1; i<=r; i++){ // i is number of row
        for(int j=1; j<=i; j++){  // j is number of column 
            cout<<i;
            }
        cout<<endl;
    }
}