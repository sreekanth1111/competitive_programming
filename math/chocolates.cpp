#include<iostream>


using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=n-2; i>=0; i--){

        if (arr[i] >= arr[i + 1]) {
            arr[i] = arr[i + 1] - 1;
            if (arr[i] < 0) arr[i] = 0; 
        }
    }

    long long total = 0;
    
    for(int i=0; i<n; i++){
        total += arr[i];
    }

    cout << total << endl;
}