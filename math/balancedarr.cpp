#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int num, num1;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        num = arr[i];
        num1 = num/2;
        if(num1%2!=0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            int res[num];
            int s, m;
            s = 2;
            m = 1;
            
            for(int j=0; j<num1; j++){
                if(j == num1-1){
                    res[j+num1] = m+num1;
                }
                else{
                    res[j+num1] = m;
                }
                res[j] = s;
                m += 2;
                s += 2;
            }
            for(int j=0; j<num; j++){
                cout << res[j] << " ";
            }
            cout << endl;
        }
    }
}