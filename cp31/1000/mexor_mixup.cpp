#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int a , b; cin >> a >> b;
        int n = a-1;
        int div = n%4;
        int val = 0;

        if(div==0){ val = n;}
        else if(div==1){ val = 1;}
        else if(div==2){ val = n+1;}
        else{ val = 0;}

        if(val==b){ cout << a << endl;}
        else if((val^b)!=a) { cout << a+1 << endl;}
        else{ cout << a+2 << endl;}

    }
    
}