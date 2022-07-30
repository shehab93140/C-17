#include <iostream>
using namespace std;

int main (void)
{
    /*
    n=4
    spaces 3 stars 1
    spaces 2 stars 3
    spaces 1 stars 5
    spaces 0 stars 7
     spaces ={3 2 1 0}
     stars  ={1 3 5 7}
    */
   
int row=1 ;
int n ;
cin >> n ;
while (row<=n){
    int stars_count = 1;
    while (stars_count<=n-row){
        cout<<" ";
        stars_count ++;
    }
    stars_count =1;
    while (stars_count <= 2*row-1){
        cout<<"*";
        stars_count++;
    }
    cout <<"\n";
    row ++;
    

}
row =n-1;
while (row>=1){
    int stars_count = 1;
    while (stars_count<=n-row){
        cout<<" ";
        stars_count ++;
    }
    stars_count =1;
    while (stars_count <= 2*row-1){
        cout<<"*";
        stars_count++;
    }
    cout <<"\n";
    row --;
    

}
return 0;
}