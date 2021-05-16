//constexpr example

constexpr int getArraySize() { return 32;}

int main()
{
    int myArray[getArraySize() + 1];
    return 0;
}