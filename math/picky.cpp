#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int result[t];

    for(int j=0; j<t; j++){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int ele = arr[0];
        int sm = 0;
        int lg = 0;

        for(int i=1; i<n; i++){
            if(ele>arr[i]) sm++;
            else lg++;
        }

        if((lg==n)&&(ele!=abs(ele)) || (sm==n)&&(ele==abs(ele))){
            result[j] = 0;
        }
        else{
            result[j] = 1;
        }

    }

    for(int i=0; i<t; i++){
        if(result[i]==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }
}