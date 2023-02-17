#include <algorithm>
#include <iostream>
#include <vector>

void pv(const std::vector<int>& vec)
{
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> v { 25, 7, 20, 5, 18, 2, 123 };
    pv(v);
    std::sort(v.begin(), v.end(), [](const int& lhs, const int& rhs) { return lhs > rhs; });
    pv(v);
}