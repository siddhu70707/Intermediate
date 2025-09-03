#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* p = arr;  // p is an int pointer storing adress of arr[0]
    cout << *p << "\n";
    cout << *p << endl;     
    cout << *(p + 1) << endl; 
    cout << *(p + 2) << endl;

    int n;
    cout << "Enter Size OF The ARRAY:";
    cin >> n;

    int* addresofARRAy = new int[n];


    for (int i = 0; i < n; i++) {
        addresofARRAy[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << addresofARRAy[i] << "  ";
         
    }
    delete[] addresofARRAy;

    return 0;
    
    
}



