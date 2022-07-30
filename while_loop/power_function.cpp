#include <iostream>
using namespace std;
int main (void)
{

    int num , power ;
    cin >> num >> power;
    int result =1;
    while (power>=1){
        result *=num;
        power --;
    }
    cout <<result<<" ";
    return 0;
}