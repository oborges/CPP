#include <iostream>

int* foo() { 
     int x = 10;
     return &x;
}

int main()
{
	int k=*foo();
	std::cout << k;
        return 0;
}

