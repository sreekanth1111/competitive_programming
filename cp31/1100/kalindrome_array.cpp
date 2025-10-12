#include<bits/stdc++.h>

using namespace std;

bool check(vector<long long> &a, long long x){
    int i = 0, j = a.size()-1;
    while(i<j){
        while(i<j && a[i]==x) i++;
        while(i<j && a[j]==x) j--;
        if(i<j && a[i]!=a[j]) return false;
        i++; j--;
    }
    return true;
}

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int i = 0, j = n-1;
        while(i<j && a[i]==a[j]) i++, j--;


        if(n<=2 || i>=j) cout << "YES" << endl;
        else{
            if(!check(a,a[i]) && !check(a,a[j])) cout << "NO" << endl;
            else cout << "YES" << endl;
        }

    }
    
}