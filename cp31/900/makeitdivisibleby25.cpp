#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long num; cin >> num;
        int val;
        int endzero = 0;
        int endfive = 0;
        int count = 0;

        while(num){
            val = num%10;
            num /= 10;
            if((val == 0 || val == 5) && endzero){
                if(endfive){
                    count++;
                }
                break;
            }
            else if((val == 2 || val == 7) && endfive){
                if(endzero){
                    count++;
                }
                break;
            }
            else if(val == 0){
                endzero = 1;
            }
            else if(val == 5 && !endfive){
                endfive = 1;
            }
            else{
                count++;
            }
        }

        cout << count << endl;
        
    }

    
}