#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int n=1;n<=c;n++){
            if(i==1 || i==r || n==1 || n==c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}