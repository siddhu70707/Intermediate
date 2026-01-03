#include <vector>
#include <iostream>
using namespace std;

void print_array(vector<int> nums, int i){
    if(i == nums.size()){
        return;
    }
    cout << nums[i] << " " ;
    print_array(nums, i+1);
}

int main(){
    vector<int> arr = {1, 3, 4, 6, 7};
    print_array(arr, 0);
    return 0;
}