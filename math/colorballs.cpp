#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long arr[t][4];

    for(int i=0; i<t; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }

    for(int i=0; i<t; i++){
        long long r,b,g,w;
        r = arr[i][0];
        b = arr[i][1];
        g = arr[i][2];
        w = arr[i][3];
        bool ispossible = false;
        int count = 0;
        
        while(r>=0 && b>=0 && g>=0 && w>=0 && count!=2){
            int rem = 0;
            rem = (r%2) + (b%2) + (g%2) + (w%2);
            if(rem<=1){
                cout << "YES" << endl;
                ispossible = true;
                break;
            }
            else{
                r--;
                b--;
                g--;
                w += 3;
                count++;
            }
        }
        if(!ispossible) cout << "NO" << endl;
         
    }
}