#include <iostream>
#include "transform.hpp"

void coutMap(auto element){
    std::cout << element.first << '-';
    std::cout << element.second << ' ';
}
template <typename Container >
void printCollection(const Container& collection) {
    for (const auto& element : collection) {
        std::cout << element << " ";
    }
    std::cout << '\n';
}


int main() {
    std::list<std::string> list{
        "Ala", "Kot", "Ma", "Rysia", "Ala",
        "Sierotka", "Kot", "Ma", "Ala"};

    std::deque<int> deque{
        1, 2, 3, 4, 5, 3, 1, 2, 3, 4,
        5, 2, 3, 1, 1, 2, 3, 2, 1, 4};
    printCollection(list);
    printCollection(deque);
    
    auto transform = removeDuplicateAndTranformToMap(list, deque);
    for(auto & [first, second] : transform){
        std::cout << first << "|" << second << ", "; 
    }
    std::cout << '\n';

    return 0;
}