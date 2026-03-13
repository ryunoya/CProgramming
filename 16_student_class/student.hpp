#include <string>
#include <iostream>
#ifndef STUDENT_HPP
#define STUDENT_HPP

class Student {
public:
    // Constructor prototype (REQUIRED)
    Student(const std::string& n, double g); 

    std::string getName() const;
    static int getTotalStudents();
    double getGPA() const;
    static void setGraduationRequirement(double newGPA);
    void print() const;
    bool canGraduate() const;

    

private:
    std::string name;
    double gpa;
    static int total_students;  // total number of students created
    static int next_id;         // generate unique student ID
    static double goodGPA;      // Graduation requirement

    std::string id;
};

#endif