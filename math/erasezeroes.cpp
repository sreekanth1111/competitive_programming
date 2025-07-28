#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string num[n];

    for(int i=0; i<n; i++){
        cin >> num[i];
    }

    for(int i=0; i<n; i++){
        int low = -1;
        int high = -1;
        int count = 0;

        for(int j=0; j<num[i].length(); j++){
            if(num[i][j] == '1'){
                low = j;
                break;
            }
        }
        for(int j=num[i].length(); j>=0; j--){
            if(num[i][j] == '1'){
                high = j;
                break;
            }
        }

        for(int j=low+1; j<high; j++){
            if(num[i][j] == '0'){
                count++;
            }
        }

        cout << count << endl;

    }
}