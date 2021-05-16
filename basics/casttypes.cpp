//types of cast

#include <iostream>

int main()
{
    float myFloat = 3.14f;
    int i1 = (int) myFloat; //method 1, C like, not recommended but common
    int i2 = int(myFloat);  //rarely used
    int i3 = static_cast<int>(myFloat);
    
    std::cout << "Method 1: " << i1 << std::endl;
    std::cout << "Method 2: " << i2 << std::endl;
    std::cout << "Method 3: " << i3 << std::endl; 
    
    return 0;
}