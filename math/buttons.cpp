#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 0;
    int val = 0;

    for(int k=0; k<n; k++){
        val = (n-k) + (k)*(n-k-1);
        total += val;
    }

    cout << total << endl;
}