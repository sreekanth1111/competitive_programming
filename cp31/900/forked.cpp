#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int dx[4] = {1,1,-1,-1}; 
        int dy[4] = {1,-1,1,-1};
        int a, b; cin >> a >> b;
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2;

        set<pair<int,int>>set1;
        set<pair<int,int>>set2;

        for(int i=0; i<4; i++){

            set1.insert({x1+dx[i]*a,y1+dy[i]*b});
            set2.insert({x2+dx[i]*a,y2+dy[i]*b});
            set1.insert({x1+dx[i]*b,y1+dy[i]*a});
            set2.insert({x2+dx[i]*b,y2+dy[i]*a});
        }

        int count = 0;
        for(auto t:set1){
            if(set2.find(t)!=set2.end()){
                count++;
            }
        }

        cout << count << endl;
    }
    
}