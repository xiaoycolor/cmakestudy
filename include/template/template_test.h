#include <iostream>

template <typename T>
void func(T a)
{
    std::cout << a << std::endl;
}

enum platform
{
    unknow,
    amd,
    nvidia,
    android,
    apple
};


template <platform>
class test1
{
public:
    void print();
};
