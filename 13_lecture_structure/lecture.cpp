#include <iostream>
#include <string>

// create a structure description
typedef struct {
    std::string title;
    int duration;

} Lecture;


int main(void) {
    // create a lecture object
        Lecture oop_lecture;
        oop_lecture.title = "Classes and Objects";
        oop_lecture.duration = 10000;

        std::cout << "Title: " << oop_lecture.title << std::endl;
        std::cout << "Duration: " << oop_lecture.duration << std::endl;

    return 0;
}
