#include <iostream>
#include <cstdlib>

void print() {
    std::cout << source << " -> " << destination << " (" << length << " miles)" << std::endl;
}

class Route {

    private:
        std::string source;
        std::string destination;
        int length;

    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75; // Assume a fixed length for simplicity
    }

    public:
   // route() {
    //    length = 0;
    //}
    
    route() : source ("-"), destination ("-"), length (0) {

}

route(const std::string& s, const std::string& d) : source(src), destination(dest) {
    updateLength();

int getLength(){
    return length;
}

// set methods (setters, mutator functions)
void setSource(std::string& new_source) {
    source = new_source;
    // call private method
    updateLength();

}
void setDestination(std::string& new_dest) {
    destination = new_dest;

}



int main(void) {
    srand(time(0)); // Seed the random number generator
    Route spring_break_trip;
    spring_break_trip.setSource("Lakeland");
    spring_break_trip.setDestination("Orlando");
    spring_break_trip.print();


    spring_break_trip.setDestination = "New York";

    route summer_trip("Lakeland", "Tokyo");
    summer_trip.print();
    
    return 0;
}