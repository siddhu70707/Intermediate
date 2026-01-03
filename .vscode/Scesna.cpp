#include <bits/stdc++.h>
using namespace std;

// Convert an integer to 8-bit binary string
string to8(int x) {
    if (x < 0 || x > 255) return "ERR";
    string s = "";
    for (int i = 7; i >= 0; i--) {
        s += ((x >> i) & 1) ? '1' : '0';
    }
    return s;
}

int main() {
    string op;
    int a, b;

    cout << "SCESNA/C++ Compiler\n";
    cout << "Supported operations: add, sub\n";
    cout << "Enter operation: ";
    cin >> op;

    cout << "Enter number A (0-255): ";
    cin >> a;

    cout << "Enter number B (0-255): ";
    cin >> b;

    // Validate operation
    string opbits = "";
    if (op == "add") opbits = "00";
    else if (op == "sub") opbits = "01";
    else {
        cout << "Error: Unsupported operation '" << op << "'\n";
        cout << "Press ENTER to exit...";
        cin.ignore(); cin.get();
        return 0;
    }

    // Validate numbers
    if (a < 0 || a > 255) { 
        cout << "Error: A out of range\n"; 
        cout << "Press ENTER to exit...";
        cin.ignore(); cin.get();
        return 0; 
    }
    if (b < 0 || b > 255) { 
        cout << "Error: B out of range\n"; 
        cout << "Press ENTER to exit...";
        cin.ignore(); cin.get();
        return 0; 
    }

    // Convert numbers to binary
    string Abits = to8(a);
    string Bbits = to8(b);

    // Display machine code nicely
    cout << "\nCompiled Machine Code:\n";
    cout << "Operation bits: " << opbits << "\n";
    cout << "Number A bits:  " << Abits << "\n";
    cout << "Number B bits:  " << Bbits << "\n";

    cout << "\n--- End of Compilation ---\n";
    cout << "Press ENTER to exit...";
    cin.ignore(); 
    cin.get();   
    return 0;
}
