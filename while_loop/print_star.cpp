#include <iostream>
using namespace std;
/*at  row 1  *
    row 2 **
    */

int main(void)
{
    int n;
    cin >> n;
    while (n>0){ 
        int start_count=1;
        while(start_count<=n){
            cout<<"*";
            start_count++;
        }
        cout<<"\n";
        n--;
    }
    return 0;
}