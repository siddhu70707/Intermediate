#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};

struct ball
{
    float radius;
    string colorr;
    float mass;
    float velocity;
    
};


int main() {
    Student s1 = {"Siddhu", 13, 92.5};

    // pointer to struct
    Student* ptr = &s1;

    // access with -> (arrow operator)
    cout << ptr->name << " has " << ptr->marks << " marks\n";
    
    Student* s2 = new Student;
    s2->name = "Alex";
    s2->age = 14;
    s2->marks = 85.5;

    cout << s2->name << endl;

    delete s2; // free memory


    return 0;
}
