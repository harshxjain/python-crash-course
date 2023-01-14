#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What's your name?\n";
    std::cin >> name;
    std::cout << "Hello " << name;
    return 0;
}