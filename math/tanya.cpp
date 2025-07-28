#include<iostream>

using namespace std;

int main(){

    int num,k;
    cin >> num >> k;
    int digit;

    for(int i=0; i<k; i++){
        digit = num % 10;
        if(digit != 0){
            num--;
        }
        else{
            num /= 10; 
        }
    }

    cout << num << endl;

}