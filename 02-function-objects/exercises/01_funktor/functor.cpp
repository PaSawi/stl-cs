#include <iostream>

struct Functor {
    bool operator()(int el)
    {
        return !(el%6);
    }
};

int main()
{
    Functor f;
    std::cout <<f(18) << "\n" ;
}