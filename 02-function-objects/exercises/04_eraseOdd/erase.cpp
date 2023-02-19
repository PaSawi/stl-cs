#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    v.erase(std::remove_if(
                v.begin(),
                v.end(),
                [](int num) { return num % 2; }),
        v.end());

    auto print = [](int num) { std::cout << num << " "; };
    std::for_each(v.begin(), v.end(), print);
    std::cout << " ";
    print;
}