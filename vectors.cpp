#include <iostream>
#include <vector>
using namespace std;

// BUBBLE SORT + BINARY SORT

int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(70);
    nums.push_back(30);
    nums.push_back(10);
    nums.push_back(90);

    // for (int i = 0; i < nums.size(); i++){
    //     for (int j = i + 1; j < nums.size(); j++){
    //         if (nums[i] > nums[j])
    //         {
    //             int temp = nums[i];
    //             nums[i] = nums[j];
    //             nums[j] = temp;
    //         } 
            
    //     }
        
    // }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    sort(nums.begin(), nums.end());

    int target = 40;
    int l = 0;                   
    int r = nums.size() - 1;

    while (r >= l){
        int m = (l + r) / 2;
        if (nums[m] == target){
            cout << "found: " <<nums[m] << " at index: " << m;
            return 0;
        }
        else if (nums[m] < target){
            l = m + 1;}
        else {
            r = m - 1;
        }
        
    }

    cout << "not found!";
    return 0;
}