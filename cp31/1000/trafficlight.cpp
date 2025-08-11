#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        char c; cin >> c;
        string str; cin >> str;
        string s = str+str;
        int maxval = 0;
        int val = 0; 
        vector<int>a(2*n);

        for(int i=2*n-1; i>=0; i--){
            if(s[i] == 'g'){
                val = i;
            }
            a[i] = val;
        }

        for(int i=0; i<n; i++){
            if(s[i] == c){
                maxval = max(maxval,a[i]-i);
            }
        }

        

        cout << maxval << endl;
        

        
    }

    
}