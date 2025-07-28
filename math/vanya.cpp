#include<iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int total = 0;
    int level = 0;
    int row = 0;

    while(num > 0){
        row++;
        total += row;
        num -= total;
        if(num < 0){
            break;
        }
        level++;
    }


    cout << level << endl;
}