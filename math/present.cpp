#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    
    for (int i = 0; i <= n; i++) {
        
        for (int space = 0; space < (n - i) * 2; space++) {
            cout << " ";
        }

        
        for (int j = 0; j <= i; j++) {
            if (j > 0) cout << " ";  
            cout << j;
        }

        
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        
        cout << endl; 
    }

    
    for (int i = n - 1; i >= 0; i--) {
        
        for (int space = 0; space < (n - i) * 2; space++) {
            cout << " ";
        }

        
        for (int j = 0; j <= i; j++) {
            if (j > 0) cout << " ";  
            cout << j;
        }

        
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        
        cout << endl; 
    }

    return 0;
}
