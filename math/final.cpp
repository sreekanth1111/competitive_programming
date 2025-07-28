#include<iostream>
#include<numeric>

using namespace std;

int main(){
    int n;
    cin >> n;
    int len[n], val[n];
    int *arr[n];

    for(int i=0; i<n; i++){
        cin >> len[i] >> val[i];
        arr[i] = new int[len[i]];
        for(int j=0; j<len[i]; j++){
            cin >> arr[i][j];
        }

    }
    
    int sum;

    for(int i=0; i<n; i++){

       sum = accumulate(arr[i],arr[i]+len[i],0);
       if(sum % len[i] == 0 && (sum / len[i]) == val[i]){
            cout << "YES" << endl;
       }
       else{
            cout << "NO" << endl;
       }
       delete[] arr[i];
    }
}