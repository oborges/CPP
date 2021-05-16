#include <charconv>
#include <iostream>

int main()
{
    std::string out(10, ' ');
    //to_char - int, float, double, etc to char
    auto [ptr, ec] = std::to_chars(out.data(), out.data() + out.size(), 12345);
    if (ec == std::errc()) { /* conversion successfull */
        std::cout << out;
    }

    std::string stringParaNumero = "200300";

    //from_chars - char to int,float, etc
    int stringConvertida = 0;
    auto [ptr2, ec2] = std::from_chars(stringParaNumero.data(), out.data() + out.size(), stringConvertida);
    
    if (ec2 == std::errc()) { /* conversion successfull */
        std::cout << stringConvertida;
    }

}