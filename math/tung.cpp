#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool res[n];

    for(int i=0; i<n; i++){
        string p,s;
        cin >> p; 
        cin >> s;
        int count = 0;
        int k = 0;
        bool result = true;

        for(int j=0; j<p.length(); j++){
            if(p[j] == s[k] && p[j] == s[k+1]){
                k += 2;
            }
            else if(p[j] == s[k]){
                k += 1;
            }
            else{
                result = false;
                break;
            }
        }
        
        res[i] = result;
    }

    for(int i=0; i<n; i++){
        if(res[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}