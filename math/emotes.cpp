#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    size_t n, m, k;
    cin >> n >> m >> k;
    size_t arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int count;
    count = m/(k+1);

    size_t val;

    val = k*count*arr[n-1] + count*arr[n-2] + (m%(k+1)*arr[n-1]);

    cout << val << endl;

}