#include <iostream>
#include <vector>
using namespace std;

vector<int> pivot_slicer(vector<int> &nums, int k) {
    if (k <= 0 || k > nums.size()) return {};

    vector<int> rotated(nums.size());
    int j = 0;

    for (int i = k; i < nums.size(); i++) {
        rotated[j++] = nums[i];
    }

    for (int i = 0; i < k; i++) {
        rotated[j++] = nums[i];
    }

    return rotated;
}

int main() {
    vector<int> num = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int pivot = 4;

    vector<int> result = pivot_slicer(num, pivot);

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
