#include <iostream>
#include <string>

void print_combinations(int n);
void combinations_helper(std::string& s, int n, int i);

int main(void) {
    std::cout << "Enter size :";
    int n;
    std::cin >> n;
    print_combinations(n);

    return 0;
}

void print_combinations(int n) {
    std::string s(n, 'a');
    // call helper function
    combinations_helper(s, n, 0); // zero is the index

}

void combinations_helper(std::string& s, int n, int i) {
    // base case
    if (i >= n) {
        std::cout << s << std::endl;
        return;
    }
    while (s[i] <= 'z') {
        // recursive call for the next character
        combinations_helper(s, n, i + 1);
        s[i]++;
    }
    // if letter reaches z, set it to a
    s[i] = 'a';
}
