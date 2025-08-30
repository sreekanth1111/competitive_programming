#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long a, b; cin >> a >> b;

        long long count = 30;
        if(a<b) count = 1;
        else if(a==b) count = 2;
        else{
            for(long long bval = ((b==1)?1:0); bval<=30; bval++){
                long long val = a;
                long long c = bval;
                while(val!=0){
                    val /= (bval+b);
                    c++;
                }
                count = min(count,c);
            }

        }
        cout << count << endl;
    }
    
}