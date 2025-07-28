#include<iostream>

using namespace std;

int main(){
    size_t x;
    cin >> x;
    int count;
    count = 0;

    while(x){
        if(x>=5) x -= 5;
        else if(x>=4) x -= 4;
        else if(x>=3) x -= 3;
        else if(x>=2) x -= 2;
        else x -= 1;
        count++;
    }

    cout << count << endl;
}