#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello!";
    s.insert(5, " World"); // Inserts at index 5
    cout << s << endl; // Hello World!

    s.erase(5, 6); // Erases 6 chars from index 5
    cout << s << endl; // Hello!

}

