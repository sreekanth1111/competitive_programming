#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int maxcount , mincount;
    int count;

    if(n > m){

        if(n % 2 == 0){
            maxcount = n/2;
            mincount = n;
            count = m;

            while(count < maxcount){
                count += m;
            }

            if(count <= mincount){
                cout << count << endl;
            }
            else{
                cout << -1 << endl;
            }
            
            
        }
        else {

            maxcount = n/2 + 1;
            mincount = n;
            count = m;

            while(count < maxcount){
                count += m;
            }

            if(count <= mincount){
                cout << count << endl;
            }
            else{
                cout << -1 << endl;
            }
            
        }
    }
    else if(n == m){
        cout << n << endl;
    }
    else {
        cout << -1 << endl;
    }
}