#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<pair<int, int>> arr(m); 

    for(int i=0; i<m; i++){
        cin >> arr[i].first;
        arr[i].second = i+1;
    }

    sort(arr.begin(),arr.end());
    int count = 0;
    int sum = 0;
    vector<int> result(m);

    for(int i=0; i<m; i++){
        if((sum+arr[i].first)<=n){
            sum += arr[i].first;
            result.push_back(arr[i].second);
            count++;
        }
    }

    cout << count << endl;
    if(count!=0){
        for(int index : result){
            if(index!=0){
                cout << index << " ";
            }
            
        }
        cout << endl;
    }
    
}