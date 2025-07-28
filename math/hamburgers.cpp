#include<iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int nb, ns, nr;
    cin >> nb >> ns >> nr;
    int pb, ps, pr;
    cin >> pb >> ps >> pr;
    int bud;
    cin >> bud;

    int b,s,r;
    b = s = r = 0;
    for(char ch:str){
        if(ch=='B') b++;
        else if(ch=='S') s++;
        else if(ch=='R') r++;
    }

    int count = 0;
    while(true){
        if(b!=0){
            if((nb-b)>=0){
                nb -= b;
            }
            else{
                bud -= (b-nb)*pb;
                nb = 0;
                if(bud<0) break;
            }
        }
        
        if(s!=0){
            if((ns-s)>=0){
                ns -= s;
            }
            else{
                bud -= (s-ns)*ps;
                ns = 0;
                if(bud<0) break;
            }
        }
        
        if(r!=0){
            if((nr-r)>=0){
            nr -= r;
            }
            else{
                bud -= (r-nr)*pr;
                nr = 0;
                if(bud<0) break;
            }
        }
        

        count++;

    }

    cout << count << endl;
}