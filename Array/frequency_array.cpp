#include<iostream>
using namespace std;
int main (void){
     int number []={1,2,5,7,8,9,9,9,9,9,12,9,6,4,7,5,3,4,10};
     int fre[255]={0};
    int max=0,index=0;
    int size=sizeof(number)/sizeof(number[0]);
    for(int i=0;i<size;i++){
        fre[number[i]]++;
        if(number[i]>max){
            max=number[i];
            index=i+1;
        }
    }
    cout << max <<" "<<index;
    return 0;
}