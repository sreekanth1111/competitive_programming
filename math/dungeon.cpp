#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    bool result[t];

    for(int i=0; i<t; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        long long total = a+b+c;

        if((total)>=9 && (total)%9==0){
            int min = total/9;

            if(a>=min && b>=min && c>=min){
                result[i] = true;
            }
            else{
                result[i] = false;
            }
        }
        else{
            result[i] = false;
        }
    }

    for(int i=0; i<t; i++){
        if(result[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}