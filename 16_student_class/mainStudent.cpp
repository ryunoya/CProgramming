#include "student.hpp"
#include <iostream>

int main(void) {
// Print the total number of students
    std::cout << "Total students " << Student::getTotalStudents() << std::endl;

    Student s1("Bob", 3.2);
    Student s2("Anna", 3.0);

    std::cout << "Total students " << Student::getTotalStudents() << std::endl;

    s1.print();
    s2.print();
    


    return 0;
}