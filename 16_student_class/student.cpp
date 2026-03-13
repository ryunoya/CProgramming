#include <string>
#include <iostream>
#include "student.hpp"

// Initialize the static data member (REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.0; // Default graduation requirement


Student::Student(const std::string& n, double g) : name(n), gpa(g) {
        total_students++;
        id = "U0000" + std::to_string(next_id+=5);
}

int main(void) {
// Print the total number of students
    std::cout << "Total students " << Student::getTotalStudents() << std::endl;

    Student s1("Bob", 3.2);
    Student s2("Anna", 3.0);

    std::cout << "Total students " << Student::getTotalStudents() << std::endl;
    return 0;
}

int Student::getTotalStudents() {
        return total_students;
    }

std::string Student::getName() const {
        return name;
    }

double Student::getGPA() const {
        return gpa;
    }

    void Student::print() const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "GPA: " << getGPA() << std::endl;
        std::cout << "Can graduate: " << ((canGraduate()) ? "YES" : "NO") << std::endl;
    }

bool Student::canGraduate() const {
        return gpa >= goodGPA;
    }

void Student::setGraduationRequirement(double newGPA) {
        goodGPA = (newGPA > 2.0 && newGPA <= 4.0) ? newGPA : goodGPA; // ? means not
}
