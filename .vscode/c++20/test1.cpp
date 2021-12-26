// #include<type_traits>

// template <typename T>
// concept number = std::is_arithmetic<T>::value;
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a = 0b111111111111111111111111;

    float b = (float)a;
    double c = (double)a;
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%lf", c);
}