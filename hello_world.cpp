#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello " << (name.empty() ? "World" : "world from " + name) << "!" << std::endl; //? mean if constrution
    return 0;
}

