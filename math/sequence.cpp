#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long arr[t];

    for(int i=0; i<t; i++){
        long long a, k;
        cin >> a >> k;

        while(k!=1){
            int mindig = 9;
            int maxdig = 0;
            long long num = a;

            while(num){
                int digit = num%10;
                num /= 10;
                if(mindig>digit) mindig = digit;
                if(maxdig<digit) maxdig = digit;
            }
            if (mindig == 0) break;
            a = a + mindig*maxdig;
            k--;
        }
        arr[i] = a;
    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}