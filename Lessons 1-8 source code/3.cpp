#include <iostream>

int main()
{
    int a;
    char b;
    char name[31];
    std::cout << "Enter an integer:" << std::endl;
    std::cin>>a;
    std::cout << "Enter a character:" << std::endl;
    std::cin>>b;
    std::cout << "Enter your name:" << std::endl;
    std::cin>>name;
    std::cout << name << " entered " << a << " and " << b << "." << std::endl;
    system("PAUSE");
    return 1;
}
