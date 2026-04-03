#include <iostream>

// template class
template <typename T1 = int, typename T2 = char> // default template parameters
class Pair {
public:
    Pair(const T1& f, const T2& s) : first(f), second(s) {
    }
    // getters 
    const T1& getFirst() const {
        return first;
    }

    const T2& getSecond() const {
        return second;
    }

    // setters
    void setFirst(const T1& first) {
        this -> first = first;
    }   
    void setSecond(const T2& second) {
        this -> second = second;
    }

private:
    T1 first;
    T2 second;
}; 


// create a function that takes two argumentts of any type and returns a pair object
template <typename T1, typename T2>
Pair<T1, T2> createPair(const T1& f, const T2& s) {
    return Pair<T1, T2>(f, s);
}




int main(void){
    //create the pair object
    Pair<int, double> p(1, 4.5);

    std::cout << "(" << p.getFirst() << ", " << p.getSecond() << ")\n" << std::endl;

    // test createPair
    Pair<std::string, char> p2 = createPair(std::string("hello"), '!');
    std::cout << "(" << p2.getFirst() << ", " << p2.getSecond() << ")\n" << std::endl;

    auto p3 = createPair(std::string("hello"), std::string("car"));
    std::cout << "(" << p3.getFirst() << ", " << p3.getSecond() << ")\n" << std::endl;

    Pair<> p4(5, 5.4); // use default template parameters

    return 0;
}