#include<iostream>
using namespace std;
int main(void){
int i =0,j=0;
int n=0;
cin>> n;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if((i==j|| n-i-1==j)){
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
   cout<<"\n";
}
return 0;
}