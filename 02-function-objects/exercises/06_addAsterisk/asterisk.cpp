#include <iostream>

int main()
{
    auto asterisk = [ast = 1]() mutable {
        std::string word(ast, '*');
        ast++;
        std::cout << word << "\n";
    };
    asterisk();
    asterisk();
    asterisk();
    asterisk();
    asterisk();
    asterisk();
}