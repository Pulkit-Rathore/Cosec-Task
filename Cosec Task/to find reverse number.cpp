#include <iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Give Number to Reverse";
    cin>>n;
    while(n>0){
        int r= n%10;
        sum = sum*10 + r;
        n=n/10;
    }
    cout<<sum;

    return 0;
}