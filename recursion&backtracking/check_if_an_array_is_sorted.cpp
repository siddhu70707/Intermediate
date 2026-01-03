#include <vector>
#include <iostream>

using namespace std;

bool is_sorted(vector <int>& arr, int i){
    if( i == 0) return true;
    if(arr[i] < arr[i - 1] ) return false;

    return is_sorted(arr, i-1);
}


int main(){
    vector<int> arr = {1, 3, 4, 5 ,7};
    cout << is_sorted(arr, 4 ) <<endl;
    return 0;
} // is array sorted