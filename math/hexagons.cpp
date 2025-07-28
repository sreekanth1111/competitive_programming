#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long result = 1;
    long long num = 6;

    while(n){
        result += num;
        num += 6;
        n--;
    }

    cout << result << endl;
}