#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long result[t];

    for(int i=0; i<t; i++){
        int w,h;
        cin >> w >> h;
        int a,b,c,d;
        long long val1,val2,val3,val4;

        cin >> a;
        int arra[a];
        for(int j=0; j<a; j++){
            cin >> arra[j];
        }
        val1 = 1LL *h * (arra[a-1]-arra[0]);

        cin >> b;
        int arrb[b];
        for(int j=0; j<b; j++){
            cin >> arrb[j];
        }
        val2 = 1LL *h * (arrb[b-1]-arrb[0]);

        cin >> c;
        int arrc[c];
        for(int j=0; j<c; j++){
            cin >> arrc[j];
        }
        val3 = 1LL *w * (arrc[c-1]-arrc[0]);

        cin >> d;
        int arrd[d];
        for(int j=0; j<d; j++){
            cin >> arrd[j];
        }
        val4 = 1LL *w * (arrd[d-1]-arrd[0]);
        
        result[i] = max(max(val1,val2),max(val3,val4));
    }

    for(int i=0; i<t; i++){
        cout << result[i] << endl;
    }
}