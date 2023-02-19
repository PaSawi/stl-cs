#include <iostream>

int main()
{
    std::string word;
    std::cin >> word;

    auto s = [&word]() mutable { 
        std::string speech ="\"";
        std::string word2 = speech + word + speech; 
    std::cout<< word2 << "\n"; };
    s();
}