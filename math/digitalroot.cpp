#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long num[t];

    for(int i=0; i<t; i++){
        long long k,x;
        cin >> k >> x;

        num[i] = x + 9*(k-1);
    }

    for(int i=0; i<t; i++){
        cout << num[i] << endl;
    }
}