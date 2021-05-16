// common variable types

#include <iostream>

int main() 
{
    int someInteger = 256;
    short someShort;
    long someLong;
    float someFloat;
    double someDouble;

    someInteger++; //257
    someInteger *= 2; //514
    someShort = static_cast<short>(someInteger); //someShort = 514
    someLong = someShort * 10000; //5.140.000
    someFloat = someLong + 0.785f; //5.140.000,785
    someDouble = static_cast<double>(someFloat) /100000; //51.4
    std::cout << someDouble << std::endl;
    return 0;
}

