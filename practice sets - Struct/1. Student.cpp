#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    int marks[5];
    int totalMarks;
};

int main() {
    Student s;
    s.totalMarks = 0;

    cout << "Enter student details:" << endl;

    cout << "Name: ";
    getline(cin, s.name);

    cout << "Roll Number: ";
    cin >> s.rollNumber;

    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
        s.totalMarks += s.marks[i];
    }

    cout << "\nStudent details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;

    cout << "Marks:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << s.marks[i] << endl;
    }

    cout << "Total Marks: " << s.totalMarks << endl;

    return 0;
}
