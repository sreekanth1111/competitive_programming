#include<iostream>

using namespace std;

int main(){
    size_t n, m, a;
    cin >> n >> m >> a;
    size_t lh, bh, total;
    

    lh = n/a;
    if(n%a!=0) lh++;

    bh = m/a;
    if(m%a!=0) bh++;

    total = lh*bh;

    cout << total << endl;


}