#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

template <typename T>
void printV(const std::vector<T>& vector)
{
    for (const auto& el : vector) {
        std::cout << el << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> vec { 1, 2, 3, 4, 5, 6, 7 };
    auto lambda = std::for_each(begin(vec), end(vec),
        [index = 0](auto el) mutable {
            std::cout << index << ": " << el << " | ";
            index++;
        });
    std::cout << "\n";

    auto mult = [](auto x, auto y) { return x * y; };
    std::cout << mult(2, 3) << "\n";
    std::cout << mult(2.4, 3) << "\n";
    std::cout << mult(20, 3.1) << "\n";
}