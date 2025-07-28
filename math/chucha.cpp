#include<iostream>

using namespace std;

int main(){
    size_t x, y, z;
    cin >> x >> y >> z;
    size_t total, wt_total, borrow;
    
    total = (x+y)/z;
    wt_total = x/z + y/z;

    if(total == wt_total){
        borrow = 0;
    }
    else{
        borrow = min(z-(x%z),z-(y%z));
    }
    

    cout << total << " " << borrow << endl;

}