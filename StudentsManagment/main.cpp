#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    string surname;
    long long id;
    long long phoneNum;
};

class Students {
protected:
    static vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }


    void printStudents() const {
        for (int i = 0; i < students.size(); i++) {
            cout << "-- Student N" << i + 1 << " -------------------------------" << endl;
            cout << "Id: " << students[i].id << endl;
            cout << "First Name: " << students[i].name << endl;
            cout << "Last Name: " << students[i].surname << endl;
            cout << "Phone Number: " << students[i].phoneNum << endl;
            cout << "---------------------------------------------\n" << endl;
        }
    }

    void Delete(long long studentId) {
        for (int i = 0; i < students.size(); ++i) {
            if (students[i].id == studentId) {
                students.erase(students.begin() + i);
                cout << "Student with ID " << studentId << " has been removed.\n\n";
                return;
            }
        }
        cout << "Student with ID " << studentId << " not found.\n\n";
    }

};


vector<Student> Students::students;


int main() {
    Students studentsList;



    Student student1 = { "User1", "User1", 123, 321 };
    Student student2 = { "User2", "User2", 1234, 4321 };
    Student student3 = { "User3", "User3", 12345, 54321 };


    studentsList.addStudent(student1);
    studentsList.addStudent(student2);
    studentsList.addStudent(student3);


    studentsList.printStudents();



    return 0;
}
