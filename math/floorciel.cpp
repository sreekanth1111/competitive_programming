#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long x[t], n[t], m[t], max[t], min[t];
    long long maxval, minval, nval, mval;

    cout << endl;
    for(int i=0; i<t; i++){
        cin >> x[i] >> n[i] >> m[i];
    }

    for(int i=0; i<t; i++){
        
        maxval = x[i];
        nval = n[i];
        mval = m[i];
        while(nval > 0 || mval > 0){
            if (maxval == 0) break;

            if (nval > 0) {
                maxval = maxval / 2; 
                nval--;
            } else if (mval > 0) {
                maxval = (maxval+1) / 2; 
                mval--;
            }
        }
        max[i] = maxval;

        minval = x[i];
        nval = n[i];
        mval = m[i];
        while (nval > 0 || mval > 0) {
            if (minval == 0) break;
            
            if (mval > 0) {
                minval = (minval+1) / 2; 
                mval--;
            } else if (nval > 0) {
                minval = minval / 2; 
                nval--;
            }
        }
        min[i] = minval;

    }

    for(int i=0; i<t; i++){
        cout << min[i] << " " << max[i] << endl;
    }
    
}