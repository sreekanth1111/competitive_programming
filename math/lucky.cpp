#include<iostream>

using namespace std;

int main(){
    size_t num;
    cin >> num;
    int count,digit;
    count = 0;

    while(num){
        digit = num % 10;
        num = num / 10;
        if(digit == 4 || digit == 7) count++;
    }
    if(count == 4 || count == 7){
        cout << "YES" << endl; 
    }
    else{
        cout << "NO" << endl;
    }
}