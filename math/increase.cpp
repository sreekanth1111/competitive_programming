#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int cur_length = 1;
    int max_length = 1;

    for(int i=0; i<n-1; i++){
        
        if(arr[i] < arr[i+1]){
            cur_length++;
        }
        else{
            max_length = max(max_length, cur_length);
            cur_length = 1;
        }
    }

    max_length = max(max_length, cur_length);

    cout << max_length << endl;
    
}