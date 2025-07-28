#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int result[t];

    for(int i=0; i<t; i++){
        int m,n;
        cin >> m >> n;
        char ch;
        int count = 0;

        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                cin >> ch;
                if(k==n-1 && ch=='R'){
                    count++;
                }
                else if(j==m-1 && ch=='D'){
                    count++;
                }
            }
        }

        result[i] = count;
        
    }

    for(int i=0; i<t; i++){
        cout << result[i] << endl;
    }
}