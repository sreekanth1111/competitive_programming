#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long a,b; cin >> a >> b;
        long long c = min(a,b), d = max(a,b);
        a = c, b = d;

        if(a==b) cout << 0 << endl;
        else{
            long long val = b/a;
            long long count = 0;
            if(b%a!=0) cout << -1 << endl;
            else{
                while(val>1){
                    if(val%8==0){
                        val /= 8;
                        count++;
                    }
                    else if(val%4==0){
                        val /= 4;
                        count++;
                    }
                    else if(val%2==0){
                        val /= 2;
                        count++;
                    }
                    else{
                        count = -1;
                        break;
                    }
                }
                cout << count << endl;
            }

            
        }

    }
    
}