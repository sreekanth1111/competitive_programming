#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    int res[t];

    for(int i=0; i<t; i++){
        int n,m;
        cin >> n >> m;
        int a[n], b[m];

        for(int j=0; j<n; j++){
            cin >> a[j];
        }

        for(int j=0; j<m; j++){
            cin >> b[j];
        }

        sort(a,a+n);

        int kval = 0;
        int count = 0;
        int k = n-1;
        int ind;
        int iter = 0;

        for(int j=m-1; j>=0; j--){
            if(iter!=0){
                if(k!=-1){
                    k -= 1;
                }
                else{
                    ind--;
                    k=ind;
                }
            }
            iter++;
            while(k>=0){
                if(b[j]<=a[k]){
                    ind = k;
                    break;
                }
                k--;
                
            }
            if(k==-1){
                if(count == 0){
                    kval = b[j];
                    count++;
                }
                else{
                    kval = -1;
                    break;
                }
            }
            
        }

        res[i] = kval;
    }

    for(int i=0; i<t; i++){
        cout << res[i] << endl;
    }
}