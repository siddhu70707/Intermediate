#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;


// * Longest Substring Without Repeating Characters
int longest_unique_substring(string& s){
    int res = 0;
    unordered_map<char, int> mp;

    int j = 0;
    for(int i = 0; i < s.length(); i++){
        while (mp[s[i]] > 0) {
            mp[s[j]]--;
            j++;
        }

        mp[s[i]]++;
        res = max(res, i - j + 1);
    }

    return res;
}




int main(){
    string testcase = "abssdfefasf";
    int x = longest_unique_substring(testcase); // 4
    cout << x << endl;
    return 0;
}
