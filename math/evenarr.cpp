#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n, res[t];

    for(int i=0; i<t; i++){
        cin >> n;
        int arr[n];
        int oddcount = 0;
        int evencount = 0;
        int count = 0;

        for(int j=0; j<n; j++){
            cin >> arr[j];
            if(arr[j]%2==0) evencount++;
            else oddcount++;

            if(arr[j]%2!=j%2) count++;
        }

        if(n==1){
            if(evencount) res[i] = 0;
            else res[i] = -1;
        }
        else if(n%2==0){
            if(oddcount==evencount){
                res[i] = count/2;
                if(count%2!=0) res[i] = -1;
            }
            else{
                res[i] = -1;
            }
        }
        else{
            if(oddcount == evencount+1 || oddcount == evencount-1){
                res[i] = count/2;
                if(count%2!=0) res[i] = -1;
            }
            else{
                res[i] = -1;
            }
        }


    }

    for(int i=0; i<t; i++){
        cout << res[i] << endl;
    }
}