#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2, 7, 3, 6, 4, 8};
    int k = 3, sum = 0;

    // Sum of first k elements
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    cout << "sum: " << sum << '\n';

    // Sliding the window
    for(int i = 0; i < arr.size() - k; i++){
        sum = sum - arr[i] + arr[i + k]; 
        cout << sum << '\n';
    }

    return 0;
}
