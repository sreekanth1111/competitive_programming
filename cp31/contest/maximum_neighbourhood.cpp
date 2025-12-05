#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long total = 0;

        if(n == 1){
            total = 1;
        }
        else if(n == 2){
            total = 9;
        }
        else if(n == 3){
            total = 29;
        }
        else if(n == 4){
            total = 56;
        }
        else{
            long long square = n * n;
            total += square - 1;
            total += square - n;
            total += square - n - 1;
            total += square - n - 2;
            total += square - 2 * n - 1;

            long long val = 0;
            val += square;
            val += square - 1;
            val += square - 2;
            val += square - 1 - n;

            total = max(total,val);
        }

        cout << total << endl;
    }
    
}