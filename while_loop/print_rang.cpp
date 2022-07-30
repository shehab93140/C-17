#include <iostream>
using namespace std;
int main (void)
{
    int num1,num2;
    cin >> num1>> num2;
    if(num1>num2||num1==num2){
        cout<<"false";
    }
    else if(num2-num1<2){
        cout<<num2-num1;
    }
    else{
        while(num2-num1>0){
             
            cout<< num1;
            num1 ++;
        }
    }

return 0;
}