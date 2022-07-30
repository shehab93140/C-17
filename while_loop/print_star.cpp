#include <iostream>
using namespace std;
/*at  row 1  *
    row 2 **
    */

int main(void)
{
    int n,i;
    i=0;
    cin >> n;
    while (n>0){ 
        int start_count=n-i;
        while(start_count<=n){
            cout<<"*";
          start_count++;
        }
       
        cout<<"\n";
         i++;
       n--;
      
    }
    return 0;
}