#include<iostream>
using namespace std;
int main(void){
    int arr []={1,1,1,1,1,3,2,2,2,2,3,3,3,3,4,4,4,5,2,3};
    int arr2[10]={0};
    int size =sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <size ;i++){
        if(!arr2[arr[i]]){
            arr2[arr[i]]+=1;
            cout<<arr[i]<<" "; 
        }
    }
   
    
return 0;

}