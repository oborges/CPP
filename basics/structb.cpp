//Example of structured bindings

#include <iostream>
#include <array>

struct Point {
    double mX, mY, mZ; };

int main()
{
    std::array<int, 3> values = {11, 22, 33};
    auto [x, y, z] = values;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    
    Point point;
    point.mX = 1.0;
    point.mY = 2.0;
    point.mZ = 3.0;
    auto [mx, my, mz] = point;
    
    std::cout << "Point: " << std::endl;
    std::cout << "x: " << mx << std::endl;
    std::cout << "y: " << my << std::endl;
    std::cout << "z: " << mz << std::endl;
    
    return 0;

}