#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    size_t arr[n][3];

    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int i=0; i<n; i++){
        size_t x, y, z;
        x = arr[i][0];
        y = arr[i][1];
        z = arr[i][2];

        if(x==y && y==z){
            cout << "YES" << endl;
            cout << x << " "
                 << y << " "
                 << z << endl;
        }
        else if(x==y || y==z || x==z){
            size_t maximum = max({x,y,z});
            size_t minimum = min({x,y,z});
            if((maximum==x && maximum==y) || 
            (maximum==y && maximum==z) || 
            (maximum==x && maximum==z)){
                size_t a,b,c;
                a = maximum;
                b = minimum;
                if(b==1) c=1;
                else c = minimum-1;
                
                cout << "YES" << endl;
                cout << a << " "
                     << b << " "
                     << c << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }

    }
}