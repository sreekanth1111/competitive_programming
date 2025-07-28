#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int res[t];

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;

        for(int j=0; j<n; j++){
            if(str[j]=='1') count += (n-1);
            else count += 1;
        }
        res[i] = count;
    }

    for(int i=0; i<t; i++){
        cout << res[i] << endl;
    }
    
}