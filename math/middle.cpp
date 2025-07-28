#include<iostream>

using namespace std;

int main(){
    int s_hour, s_min, e_hour, e_min;
    char s_ch, e_ch;
    cin >> s_hour >> s_ch >> s_min
        >> e_hour >> e_ch >> e_min;

    double mid;
    mid = ((double)(s_hour+e_hour)/2)*60 + ((s_min+e_min)/2);

    int mid_hour = (int)mid/60;
    int mid_min = (int)mid%60;

    string str1,str2;

    if(mid_hour<10){
        str1 = '0';
    }
    str1 += to_string(mid_hour);

    if(mid_min<10){
        str2 = '0';
    }
    str2 += to_string(mid_min);

    cout << str1 << ":" << str2 << endl;
}