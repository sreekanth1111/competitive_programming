#include<iostream>


using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ml_toast = (k * l) / nl;
    int l_toast = c * d;
    int s_toast = p/np;
    int n_of_toasts = (min(ml_toast, min(l_toast, s_toast)))/n;
    cout << n_of_toasts << endl;

}