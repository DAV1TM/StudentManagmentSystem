# Student Management System

This project is a simple Student Management System implemented in C++. It allows you to add, print, and delete student records.

## Features

- **Add Student**: Add a new student to the list.
- **Print Students**: Print all the student records.
- **Delete Student**: Delete a student by their ID.

## Code Structure

The project consists of the following components:

- **Student Struct**: A struct to represent a student with fields for name, surname, ID, and phone number.
- **Students Class**: A class to manage a list of students with methods to add, print, and delete students.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++)

### Compilation

To compile the project, use the following command:

```sh
g++ -o student_management main.cpp
```

### Running the Program

After compilation, run the program using:

```sh
./student_management
```

## Code Explanation

### Student Struct

The `Student` struct holds the details of a student:

```cpp
struct Student {
    string name;
    string surname;
    long long id;
    long long phoneNum;
};
```

### Students Class

The `Students` class manages the student records:

- `addStudent`: Adds a student to the list.
- `printStudents`: Prints all the student records.
- `Delete`: Deletes a student by their ID.

### Example Usage

Here is an example usage of the `Students` class in the `main` function:

```cpp
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
```

## Author

- [Davit]

## License

This project is licensed under the MIT [License](LICENSE).
