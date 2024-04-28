#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float gpa;
    Student* next;
};

void addStudent(Student** head, int id, string name, float gpa) {
    Student* newStudent = new Student;
    newStudent->id = id;
    newStudent->name = name;
    newStudent->gpa = gpa;
    newStudent->next = nullptr;

    if (*head == nullptr) {
        *head = newStudent;
    } else {
        Student* temp = *head;
        while (temp->next!= nullptr) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
}

void displayStudents(Student* head) {
    Student* temp = head;
    while (temp!= nullptr) {
        cout << "ID: " << temp->id << " Name: " << temp->name << " GPA: " << temp->gpa << endl;
        temp = temp->next;
    }
}

int updateStudent(Student** head, int id, string name, float gpa) {
    Student* temp = *head;
    while (temp!= nullptr) {
        if (temp->id == id) {
            temp->name = name;
            temp->gpa = gpa;
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int deleteStudent(Student** head, int id) {
    Student* temp = *head;
    if (temp == nullptr) {
        return 0;
    }
    if (temp->id == id) {
        *head = temp->next;
        delete temp;
        return 1;
    }
    while (temp->next!= nullptr) {
        if (temp->next->id == id) {
            Student* del = temp->next;
            temp->next = del->next;
            delete del;
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main() {
    Student* head = nullptr;

    addStudent(&head, 1, "Arshid", 3.5);
    addStudent(&head, 2, "Aabid", 3.7);
    addStudent(&head, 3, "Azad", 3.9);

    displayStudents(head);

    cout << "Updating student with ID 2." << endl;
    updateStudent(&head, 2, "Aabid", 3.8);
    displayStudents(head);

    cout << "Deleting student with ID 2." << endl;
    deleteStudent(&head, 2);
    displayStudents(head);

    return 0;
}