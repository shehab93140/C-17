#include <iostream>
using namespace std;
int main (void)
{
int num,reminder ;
cin >> num ;
int digits =0;
 num=abs(num);
 if (num==0){
        digits=1;
    }
else if (num==214783648){
   digits =10;
}
while (num>0){
   digits++;
   num/=10;
}
cout<<digits<<" ";
return 0;
}