#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student();
    ~Student();
    void InputData();
    void OutputData();
    void ResetClasses();
    Student& operator=(const Student& rightSide);

private:
    string name;
    int numClasses;
    string* classList;
};

Student::Student() {
    name = "";
    numClasses = 0;
    classList = nullptr;
}

Student::~Student() {
    delete[] classList;
}

void Student::InputData() {
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter number of classes: ";
    cin >> numClasses;
    cin.ignore(); 

    classList = new string[numClasses];
    for (int i = 0; i < numClasses; ++i) {
        cout << "Enter name of class " << i + 1 << ": ";
        getline(cin, classList[i]);
    }
}

void Student::OutputData() {
    cout << "Name: " << name << endl;
    cout << "Number of classes: " << numClasses << endl;
    for (int i = 0; i < numClasses; ++i) {
        cout << "Class " << i + 1 << ": " << classList[i] << endl;
    }
}

void Student::ResetClasses() {
    numClasses = 0;
    delete[] classList;
    classList = nullptr;
}

Student& Student::operator=(const Student& rightSide) {
    if (this != &rightSide) {
        delete[] classList;
        name = rightSide.name;
        numClasses = rightSide.numClasses;
        classList = new string[numClasses];
        for (int i = 0; i < numClasses; ++i) {
            classList[i] = rightSide.classList[i];
        }
    }
    return *this;
}

int main() {
    Student s1, s2;

    s1.InputData();
    cout << "Student 1's data: " << endl;
    s1.OutputData();

    cout<<endl;

    s2 = s1;
    cout << "Student 2's data after assignment from student 1: " << endl;
    s2.OutputData();

    s1.ResetClasses();
    cout << "Student 1's data after reset: " << endl;
    s1.OutputData();

    cout << "Student 2's data, should still have original classes: " << endl;
    s2.OutputData();
    
    cout <<endl;
    return 0;
}
