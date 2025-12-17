#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0,pow=1;

    while (decNum >0)
    {
        cout << "decNum first " << decNum << endl ;
        int rem =decNum % 2;
        cout << "remainder one " << rem << endl  ;
        decNum /= 2;

        cout << "decNum two " << decNum << endl  ;
        ans+=(rem*pow);
        cout << "answere " << ans << endl ;

        pow *=10;

        cout << "power " << pow << endl ;

    }
    return ans;
    
}

int main(){
    int decNum=50;
    cout << decToBinary(decNum) << endl;
    return 0;
}