#include <iostream>
#include <vector>
using namespace std;

void sorting(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);  
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Enter a number: ";
        cin >> arr[i];
    }

    sorting(arr, n);

    cout << "\narray: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
