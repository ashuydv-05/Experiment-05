//Experiment 5
//Ashu Yadav
//prn 23070123154
#include<iostream>
using namespace std;
int main(){
    int  n1, n2, n3;
    cout<<"Enter number:1 ";
    cin>>n1;
    cout<<"Enter number:2 ";
    cin>>n2;
    cout<<"Enter number:3 ";
    cin>>n3;

    if(n1>n2) {
        if(n1>n3) {
            cout<<n1<<" is the greatest number"<<endl;
        }
        else {
            cout<<n3<<" is the greatest number"<<endl;
        }
    }
    else if(n2>n1) {
        if(n2>n3) {
            cout<<n2<<" is the greatest number"<<endl;
        }
        else {
            cout<<n3<<" is the greatest number"<<endl;
        }
    }
    else {
        cout<<"All three numbers are equal";
    }
}