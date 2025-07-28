#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int freq[k] = {0};
    int val;
    int count = 0;

    for(int i=0; i<n; i++){
        cin >> val;
        freq[val-1]++;
    }
    sort(freq,freq+k);

    int sets = 0;
    sets = n/2;
    if(n%2!=0) sets++;

    int i=k-1;
    while(sets){
        if(i==-1){
            count += sets;
            break;
        }
        sets -= freq[i]/2;
        count += (freq[i]/2)*2;
        i--;
    }

    cout << count << endl;
}