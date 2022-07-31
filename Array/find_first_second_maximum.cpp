#include<iostream>
using namespace std;
int main(void){
    int max =0,max_2=0;
    int number []={1,2,5,7,8,9,9,9,9,9,12,9,6,4,7,5,3,4,10};
    int size=sizeof(number)/sizeof(number[0]);
    for (int i=0;i<size;i++){
        if(number[i]>max){
            max_2=max;
            max=number[i];
        }
        else
        {
            if((max!=number[i])&& (max_2<number[i])){
                max_2=number[i];
            }
        }
        
    }
    cout<< max <<" "<<max_2<<" "<<max*max_2;
    return 0;
}