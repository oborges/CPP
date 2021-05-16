#include <iostream>

//It is recommended to use the strongly-typed enum class enumerations instead of the type-unsafe enum enumerations.

int main()
{
    enum class PieceType
    {
        King = 1,
        Queen,
        Rook = 10,
        Pawn
    };

    PieceType piece = PieceType::King;
}