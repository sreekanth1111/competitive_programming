#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int result[t];

    for(int i=0; i<t; i++){
        long long n,k;
        cin >> n >> k;
        long long val;
        val = ceil((double)n/k);

        result[i] = ceil((double)(val*k)/n);
    }

    for(int i=0; i<t; i++){
        cout << result[i] << endl;
    }
}