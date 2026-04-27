#include <iostream>
// TO DO:: PRINT GPA

class Human {
public:
    Human(const std::string& n = "John Doe", int a = 1) : name(n), age(a) {
        std::cout << "Constructor human\n";  
    }

    void printInfo () const{
        std::cout << "my name is: " << name << std::endl;
    }

    std::string name;
private:
    
    int age;
};

// Inheritance: Student is a derived class of Human
// Student inherits the properties of Human (name and age) and adds its own property (gpa)
class Student : public Human {
public:
    Student(const std::string& n, int a, double g) : Human(n, a), gpa(g) {
        std::cout << "Constructor student\n";
    }

    void study() {
        std::cout << "I am studying OOP\n" << gpa << std::endl;
    }

    //redefine printInfo method
    void printInfo() const {
        std::cout << "I am " << name << std::endl;
        std::cout << "and I am a student.\n";
    }

private:
    double gpa;
};

int main(void) {
//create human object
    Human h;


    std::cout << "Constructor human\n";  

//create student object
    Student st("Jane Doe", 20, 3.8);

    h.printInfo();
    st.printInfo();
    st.study();

    return 0; 
}