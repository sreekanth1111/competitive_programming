#include<iostream>
#include<math.h>

using namespace std;

int main(){

    size_t num;
    cin >> num;
    size_t num1=0;
    int digit,inv_digit;
    int count = -1;
    size_t powerof10 = 1;

    while(num){
        digit = num%10;
        num /= 10;
        count++;
        inv_digit = 9 - digit;
        if(num == 0 && inv_digit == 0){
            inv_digit = digit;
        } else if(inv_digit > digit){
            inv_digit = digit;
        } 


        num1 = inv_digit * powerof10 + num1;
        powerof10 *= 10;
    }
    cout << num1 << endl;
}