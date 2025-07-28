#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int res[t];

    for(int i=0; i<t; i++){
        int n, x;
        cin >> n >> x;
        size_t ele;
        int freq[n];

        for(int j=0; j<n; j++){
            cin >> ele;
            freq[ele]++;
        }
        
        int y = n;
        int count = 1;
        int total = 0;
        int result = 0;
        while(x){
            for(int j=x; j<n; j++){
                total += freq[j];
            }
            result += total/count;
            count++;
            y = x;
            x = ceil((double)x/count);
        }

        res[i] = result;
    }

    for(int i=0; i<t; i++){
        cout << res[i] << endl;
    }
}