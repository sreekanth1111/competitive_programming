#include<bits/stdc++.h>

using namespace std;
    
long long need(int b, int s, int c, int nb, int ns, int nc, int pb, int ps, int pc, long long count){
    long long cost = 0;
    cost = max(0ll,count*b-nb)*pb;
    cost += max(0ll,count*s-ns)*ps;
    cost += max(0ll,count*c-nc)*pc;
    return cost;
}

int main(){
    
    string str; cin >> str;
    int nb,ns,nc; cin >> nb >> ns >> nc;
    int pb,ps,pc; cin >> pb >> ps >> pc;
    long long r; cin >> r;
    int b=0,s=0,c=0;

    for(char ch : str){
        if(ch=='B') b++;
        else if(ch=='S') s++;
        else if(ch=='C') c++;
    }

    long long low = 0, high = 1e13, mid=0;
    while(high-low>1){
        mid = (low+high)/2;
        
        if(need(b,s,c,nb,ns,nc,pb,ps,pc,mid)<=r){
            low = mid;
        }
        else{
            high = mid;
        }

    }

    cout << low << endl;

    
}