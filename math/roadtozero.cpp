#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long result[t];

    for(int i=0; i<t; i++){
        long long x,y,a,b;
        long long minval, maxval;
        cin >> x >> y;
        cin >> a >> b;
        long long res = 0;

        minval = min(x,y);
        maxval = max(x,y);

        res = (maxval-minval)*a ;
        if((minval*2*a)<(minval*b)){
            res += minval*2*a;
        }
        else{
            res += minval*b;
        }
        result[i] = res;
    }

    for(int i=0; i<t; i++){
        cout << result[i] << endl;
    }
}