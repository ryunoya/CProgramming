#include <iostream>

class Human {
public:
    Human(const std::string& n = "John Doe", int a = 1) : name(n), age(a) {

    }

    void printName () const{
        std::cout << "my name is: " << name;
    }

private:
    std::string name;
    int age;
};

// Inheritance: Student is a derived class of Human
// Student inherits the properties of Human (name and age) and adds its own property (gpa)
class Student : public Human {
public:
    Student(const std::string& n, int a, double g) : Human(n, a), gpa(g) {
    }

    void study() {
        std::cout << "I am studying OOP\n" << gpa << std::endl;
    }
private:
    double gpa;
};

int main(void) {
//create human object
    Human h;

    h.printName();

//create student object
    Student st("Jane Doe", 20, 3.8);

    st.printName();
    st.study();

    return 0; 
}
