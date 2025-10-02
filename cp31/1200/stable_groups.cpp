#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long n,k,x; cin >> n >> k >> x;
    vector<long long> a(n), gaps;

    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(),a.end());


    for(int i=0; i<n-1; i++){
        if((a[i+1]-a[i])>x){
            long long students = ((a[i+1]-a[i]+x-1)/x)-1;
            gaps.push_back(students);
        }
    }

    sort(gaps.begin(),gaps.end());
    long long groups = gaps.size()+1;
    for(auto g : gaps){
        if(k>=g){
            k -= g;
            groups--;
        }
        else break;
    }

    cout << groups << endl;
    
}