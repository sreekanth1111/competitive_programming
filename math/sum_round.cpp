#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num, count, digit, j;

    // Use dynamic memory allocation
    int **arr_sum = new int*[n]; 
    int count_arr[n];  

    for (int i = 0; i < n; i++) {
        num = arr[i];
        count = 0;
        j = 0;

        // Count non-zero digits first
        int temp = num;
        while (temp) {
            if (temp % 10 != 0) count++;
            temp /= 10;
        }

        // Allocate memory for only the required number of non-zero digits
        arr_sum[i] = new int[count];  
        count = 0; 
        j = 0;
        int power = 1;

        while (num) {
            digit = num % 10;
            num /= 10;
            if (digit != 0) {
                arr_sum[i][count] = digit * power;  
                count++;
            }
            power *= 10;  
        }
        count_arr[i] = count; 
    }

    // Print results
    for (int i = 0; i < n; i++) {
        cout << count_arr[i] << endl;
        for (int j = 0; j < count_arr[i]; j++) {
            cout << arr_sum[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr_sum[i];
    }
    delete[] arr_sum;

    return 0;
}
