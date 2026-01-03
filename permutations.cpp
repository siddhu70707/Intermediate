#include <vector>
using namespace std;

void getpermute(vector<vector<int>>& res, vector<int>& nums, int i){
    if(i == nums.size()){
        res.push_back(nums);
        return;
    }

    for(int idx = 0; idx < nums.size(); idx++){
        swap(nums[i], nums[idx]);
        getpermute(res, nums, i + 1);
        swap(nums[i], nums[idx]);
    }
}
