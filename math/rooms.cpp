#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int res[t];

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int firstone = -1;
        int lastone = -1;

        for(int j=0; j<n; j++){
            if(str[j] == '1'){
                if(firstone == -1){
                    firstone = j;
                }
                lastone = j;
            }
            
        }

        int maxdistance = n;
        if(firstone != -1){
            maxdistance = max(maxdistance,2*(lastone+1));
            maxdistance = max(maxdistance, 2*(n-firstone));
        }
        

        res[i] = maxdistance;
        
    } 

    for(int i=0; i<t; i++){
        cout << res[i] << endl;
    }
}