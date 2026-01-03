#include <iostream>
#include <vector>
#include <string>
using namespace std;

void get_operands(string s, int &a, int &b, char &operation) {
    bool is_op1 = false;
    string part1 = "", part2 = "";
    for (char c : s) {
        if (isdigit(c)) {
            if (is_op1 == false) {
                part1 += c;
            } else {
                part2 += c;
            }
        }

        if (!isdigit(c) && c != ' ') {
            is_op1 = true;
            switch (c) {
                case '+':
                    operation = '+';
                    break;
                case '-':
                    operation = '-';
                    break;
                case '*':
                    operation = '*';
                    break;
                case '/':
                    operation = '/';
                    break;
            }
        }
    }

    if (!part1.empty()) a = stoi(part1);
    if (!part2.empty()) b = stoi(part2);


}
void calculate(int a, int b, char operation){
    switch (operation) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b != 0) cout << a / b << endl;
            break;
        default:
            cout << "------UNDEFINED------" << endl;
    }
}
int main() {
    cout << "------WELCOME TO CALCULATOR------" << endl;
    cout << "TYPE END TO ESCAPE" << endl;

    bool is_continued = true;
    string input = "";
    int a = 0, b = 0;
    char sign = ' ';

    while (is_continued) {
        cout << "ENTER AN EXPRESSION: ";
        getline(cin, input);
        if (input == "END") break;
        get_operands(input, a, b, sign);
        calculate(a, b, sign);
    }

    cout << "------CLOSING CALCULATOR------" << endl;

    return 0;
}
