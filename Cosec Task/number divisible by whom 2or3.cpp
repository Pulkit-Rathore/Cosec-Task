#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number";
    cin>>a;

    if(a%2==0 && a%3==0){
        cout<<"divisible by both";
    }
    else if(a%2==0){
        cout<<"by only 2";
    }
    else if(a%3==0){
        cout<<"by only 3";
    }
    else{
        cout<<"by nothing";
    }
}
