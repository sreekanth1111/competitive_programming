#include<iostream>

using namespace std;

bool isdegenerate(int a, int b, int c){
    return ((a+b)>c && (a+c)>b && (b+c)>a);
}

int main(){
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        int xor_val;
        int val = 0;

        for(int b=1; b<a; b++){
            xor_val = a ^ b;

            if(xor_val <= 0){
                continue;
            }
            if(isdegenerate(a, b, xor_val)){
                cout << b << endl;
                val = 1;
                break;
            }
        }
        if(val == 0){
            cout << -1 << endl;
        }
    }
}