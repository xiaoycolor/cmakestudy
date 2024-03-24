#include "template/template_test.h"

template<>
void test1<unknow>::print(){
    std::cout<<"This is unknow platform!"<<std::endl;
}
template<>
void test1<amd>::print(){
    std::cout<<"This is amd platform!"<<std::endl;
}
template<>
void test1<nvidia>::print(){
    std::cout<<"This is nvidia platform!"<<std::endl;
}


#if amd_support == 1
#define PLATFORM platform::amd
#elif nvidia_support == 1
#define PLATFORM platform::nvidia
#else
#define PLATFORM platform::unknow
#endif

int main()
{
    test1<PLATFORM> obj;
    obj.print();
    return 0;
}