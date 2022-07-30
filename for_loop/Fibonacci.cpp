#include<iostream>
using namespace std;
int main(void){
    int n ;
    int a=0,b=1,c=0;
    cin >> n;
    cout << a <<" "<< b<<" ";
    for(int i=0;i<n;i++){
        a=b;
        b=c;
        c=a+b;
        cout<<c;
    } 
}