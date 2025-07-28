#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    int ex,en;
    int prev_capacity = 0;
    int cur_capacity = 0;
    int min_capacity = 0;
    int capacity[n];

    for(int i=0; i<n; i++){
        cin >> ex >> en;
        cin.ignore();
        cur_capacity = prev_capacity - ex + en;
        capacity[i] = cur_capacity;
        prev_capacity = cur_capacity;
    }

    min_capacity = *max_element(capacity,capacity+n);

    cout << min_capacity << endl;
}