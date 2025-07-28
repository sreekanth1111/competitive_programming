#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n],res[n];
    int count[n] = {0};
    int max_val,sum;

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> res[i];
    }

    for(int i=0; i<n; i++){
        sum = 0;
        while(b[i] <= res[i] && a[i] <= res[i]){

            sum = a[i] + b[i];
            max_val = max(a[i],b[i]);
            b[i] = sum;
            a[i] = max_val;
            count[i]++;
        }
    }

    for(int i=0; i<n; i++){
        cout << count[i] << endl;
    }


}