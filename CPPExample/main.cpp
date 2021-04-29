#include <iostream>
#include <array>

int main() {
    std::cout << "Input stuff:\n";
    char input[10];
    std::cin.getline(input,sizeof(input));
    std::cout << input;



//        std::array<int, 5> n = {1, 2, 3, 4, 5};
//        // https://en.cppreference.com/w/cpp/container/array
//        n[5] = 11;
//        std::cout << n.at(5); // std::cout << n.at(5)


//    std::string firstName;
//    std::cout << "Type your first name: ";
//    std::cin >> firstName;
//    std::cout << "Hello, " << firstName << "\n";
// https://www.cplusplus.com/reference/string/string/max_size/
//    std::cout << "max_size: " << firstName.max_size() << "\n";
//


    return 0;
}
