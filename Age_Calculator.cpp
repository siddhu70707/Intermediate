#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int date_of_birth[3]; 
    int current_date[3] = {15, 8, 2025};
    int age[3]; 
    string date_prompt[3] = {"Enter the day: ", "Enter the month: ", "Enter the year: "};

    for(int i=0;i<3;i++) {
        cout << date_prompt[i];
        cin >> date_of_birth[i];
    }

   
    int month_days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

   
    if(date_of_birth[0] > current_date[0]) {
        current_date[0] += month_days[(current_date[1]-2 + 12)%12]; 
        current_date[1]--; 
    }
    age[0] = current_date[0] - date_of_birth[0];

    
    if(date_of_birth[1] > current_date[1]) {
        current_date[1] += 12; 
    }
    age[1] = current_date[1] - date_of_birth[1];
    age[2] = current_date[2] - date_of_birth[2];

    cout << "Your age is: " << age[2] << " years, " << age[1] << " months, " << age[0] << " days\n";
    return 0;
}
