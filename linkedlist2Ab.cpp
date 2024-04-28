#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    Student* next;
};

void insertRecords(student *& head, string name,int rollnumber)