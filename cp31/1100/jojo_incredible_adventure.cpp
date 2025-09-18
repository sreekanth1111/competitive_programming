#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        string str; cin >> str;
        long long len = str.size();
        string res = str + str;
        long long n = res.size();
        long long count = 0, maxcount = 0;

        for(int i=0; i<n; i++){
            if(res[i]=='1') count++;
            else{
                maxcount = max(maxcount,count);
                count = 0;
            }
        }
        maxcount = max(maxcount,count);
        count = min(maxcount,len);

        if(count==0 || count==1) cout << count << endl;
        else if(count==len) cout << count*count << endl;
        else cout << ((count+1)/2)*((count/2)+1) << endl;
        
    }
    
}