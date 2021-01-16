#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"give me numbers";
    cin>>a>>b>>c;

    if(a>c){
        if(a>b){
            cout<<a<<"mera bada";
        }
        else {
            cout<<b<<"mera bada";
        }

    }
    if(b>a){
        if(b>c){
            cout<<b<<"mera bada";
        }
        else{
            cout<<c<<"mera bada";
        }
    }
}