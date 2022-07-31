#include<iostream>
using namespace std;
int main (void){
     int number []={1,2,5,7,8,9,9,9,9,9,12,9,6,4,7,5,3,4,10};
    int size=sizeof(number)/sizeof(number[0]);
    for(int i=0;i<size/2;i++){
        int last =size-i-1;
        int temp =number[i];
        number[i]=number[last];
        number[last]=temp;
    }
    for(int i=0;i<size;i++)
    cout<<number[i]<< " ";
}