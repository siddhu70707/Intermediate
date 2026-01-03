#include <iostream>
#include <bitset>
using namespace std;

// Convert number to 8-bit binary
string to8(int x) {
    if (x < 0 || x > 255) {
        return "ERROR"; 
    }
    return bitset<8>(x).to_string();
}

int main() {
    int a, b;
    char op;

    cout << "Enter expression (a op b) e.g., 20 + 14: ";
    cin >> a >> op >> b;

    // Validate numbers
    if (a < 0 || a > 255 || b < 0 || b > 255) {
        cout << "ERROR: Only numbers between 0–255 are allowed.\n";
        cout << "Press ENTER to exit...";
        cin.ignore(); cin.get();
        return 0;
    }

    string opcode;

    // Detect operation
    if (op == '+') opcode = "00";
    else if (op == '-') opcode = "01";
    else {
        cout << "ERROR: Only + or - operations are supported.\n";
        cout << "Press ENTER to exit...";
        cin.ignore(); cin.get();
        return 0;
    }

    string A = to8(a);
    string B = to8(b);

    if (A == "ERROR" || B == "ERROR") {
        cout << "ERROR: Conversion to 8-bit binary failed.\n";
        cout << "Press ENTER to exit...";
        cin.ignore(); cin.get();
        return 0;
    }

    // Final machine code
    string machine_code = opcode + A + B;

    cout << "SCESNA Machine Code: " << machine_code << endl;

    cout << "\nPress ENTER to exit...";
    cin.ignore(); 
    cin.get();   
    return 0;
}
