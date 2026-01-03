#include <iostream>
#include <vector>
using namespace std;

void nested(int ilimit, int jlimit, vector<vector<int>>& nums, int i, int j) {
    if (j == jlimit) return;           
    if (i == ilimit) {                  
        nested(ilimit, jlimit, nums, 0, j + 1); 
        return;
    }

    cout << nums[j][i] << " ";
    nested(ilimit, jlimit, nums, i + 1, j); // the parameter at the jth place was 0 before debuggging
}

int main() {
    int ilimit = 4; 
    int jlimit = 3; 
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    nested(ilimit, jlimit, arr, 0, 0);
    return 0;
}
// i debugged a recursion code on my own by making a call stack thats big for me and kids play for you