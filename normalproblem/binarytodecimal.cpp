#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int num=n;
    cout << num << endl;
    int dec_value=0;

    cout << dec_value << endl;

    int base=1;
   
    cout << "base 1 " << base << endl;

    int temp=num;

    cout << "temp 1 " << temp << endl;

    while (temp){
        int last_digit=temp%10;
        cout << "last digit one " << last_digit << endl;
        temp=temp/10;
        cout << "temp two " << temp << endl;
        dec_value +=last_digit*base;

        cout << "dec value ywo " << dec_value << endl;
        base=base*2;
        cout << "base two  " << base << endl;

    }
  return dec_value;
    
}

int binaryToDecimale2(int n){

    int ans=0;
    int temp=n;
      int base=1;

    while (temp){
        int rem= temp % 10;
        temp = temp /10;

        ans+=rem *base;
        base *=2;
    }
    return ans;

    
}


int main(){
    int num=10101001;
    cout << binaryToDecimal(num) << endl;
    cout << binaryToDecimale2(num) << endl;


}