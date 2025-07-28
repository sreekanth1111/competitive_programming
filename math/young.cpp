#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][3];

    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    int sum;
    bool isvalid = true;

    for(int i=0; i<3; i++){
        sum = 0;
        for(int j=0; j<n; j++){

            sum += arr[j][i];
        }
        if(sum!=0){
            isvalid = false;
            break;
        }
    }

    if(isvalid){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}