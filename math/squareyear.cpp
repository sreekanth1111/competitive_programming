#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string str; cin >> str;
        int num = stoi(str);
        int root;

        root = sqrt(num);

        if(root*root == num){
            cout << 0 << " " << root << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }

    
}