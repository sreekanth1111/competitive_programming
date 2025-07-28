#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    size_t res[n];

    for(int i=0; i<n; i++){
        int c, s;
        cin >> c >> s;
        int arr[c];

        int val = s/c;
        int rem = s%c;
        size_t val1;
        size_t sum = 0;

        for(int j=0; j<c; j++){
            val1 = val;
            if(rem!=0){
                val1 += 1;
                rem -= 1;
            }
            arr[j] = val1*val1;
            sum += arr[j];
        }

        cout << sum << endl;
    }
}