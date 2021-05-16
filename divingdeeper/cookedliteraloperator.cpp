#include <complex>
#include <iostream>

std::complex<long double> operator"" _i(long double d)
{
    return std::complex<long double>(0, d);
}

int main()
{
    std::complex<long double> c1 = 9.634_i;
    auto c2 = 1.23_i;   //c2 has a type std::complex<long double> 
    std::cout << c2 << std::endl;    
    return 0;
}