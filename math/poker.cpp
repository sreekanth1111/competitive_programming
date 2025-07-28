#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int result[t];

    for(int i=0; i<t; i++){
        int n,m,k;
        cin >> n >> m >> k;

        int cardsperson = n/k;

        if(m==0){
            result[i] = 0;
        }
        else{
            int maxval, minval;

            maxval = min(m,n/k);
            m -= maxval;
            minval = ceil(((double)m/(k-1)));
            result[i] = maxval-minval;
        }
    }

    for(int i=0; i<t; i++){
        cout << result[i] << endl;
    }
}