#include <iostream>
using namespace std;

string reversed(string s){
    string r;
    for (int i = s.size() - 1; i >= 0; i--) {
        r += s[i];
    }     
    return r;
}

int main() {
    string word = "madam";
    if (word == reversed(word)){
        cout << "its a palinodrome";
    }
    else {
        cout << "its not a palinodrome";  
    }
    
    return 0;
}