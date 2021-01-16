#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"letter bol\n";
    cin>>button;
    // if(button=='a'){
    //     cout<<"you are genius";
    // }
    // else if(button=='b'){

    //     cout<<"you are smart";

    // }
    // else if(button=='c'){
    //     cout<<"you are awesome";
    // }
    // else{
    //     cout<<"chl na lau** kaam kr apna";
    // }

    switch (button)
    {
    case 'a':
        cout<<"you are genious";
        break;
    case 'b':
        cout<<"you are smart";
        break;

    case 'c':
        cout<<"you are awesome";
        break;
    
    default:
    cout<<"chl na lau** apna kaam kr";
        break;
    }

}