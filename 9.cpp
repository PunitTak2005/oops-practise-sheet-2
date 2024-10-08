#include <iostream>
using namespace std;
class Student{
string name;
public:
 Student(string name) {
 this->name = name; // Using 'this' pointer to refer to class member
 }
 void display() {
 cout << "Student's name: " << this->name << endl;
 }
};
int main() {
 Student s("John");
 s.display();
 return 0;
}
