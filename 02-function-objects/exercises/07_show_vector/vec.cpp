#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    // auto lambVec = [](auto el) { std::cout << el << " "; };
    // std::for_each(v.begin(), v.end(), lambVec);
    std::for_each(begin(v), end(v), [index = 0](int el) mutable {
        std::cout << index << ": " << el << "|";
        index++;
    });
    std::cout << "\n";
}
