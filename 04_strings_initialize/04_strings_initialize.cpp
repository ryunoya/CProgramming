#include <iostream>
#include <string>

int main(void) {
    //initialize string
    std::string str1(" first string");

    //initialize string with another string
    std::string str2(str1);

    //initialize string with character and number of occurance
    std::string str3(10, '&');

    //initialize the string by a part of another string
    std::string str4(str1, 6, 6); //start from index 6, take 5 characters

    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;

    if (str1 == str2) {
        std::cout <<str4 + str1 << std::endl;

    } 

    std::string s0("R");
    std::string s1 = "G";
    std::string s2= s0 +s1;
    s2 += 'R';
    s2 += (s1 < s2) ? "Y" : s1;
    std::cout << s2 << "M" << std::endl;


    return 0;
}

 