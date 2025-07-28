#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string str;
    cin >> str;
    
    if(str=="0"){
        cout << 0 << endl;
        return 0;
    }

    int len = str.length();
    int value;

    value = (len-1)/2;

    if(str.find('1',1)!=string::npos || len%2==0){
        value++;
    }



    cout << value << endl;
}
