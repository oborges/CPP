#include <iostream>

int main()
{
    enum PieceType {PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10, PieceTypePawn};
    std::cout << "Valor de PieceTypeQueen " << PieceTypeQueen << std::endl;
    std::cout << "Valor de PieceTypePawn " << PieceTypePawn << std::endl;
    return 0;
}