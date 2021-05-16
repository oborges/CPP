#include "grid.h"
#include <vector>
#include <memory>
#include <optional>

using namespace std;

int main()
{
    Grid<int> myIntGrid;    //declares a Grid that stores ints, using default arguments for the constructor

    Grid<double> myDoubleGrid(11, 11); //declares qn 11x11 Grid of doubles

    myIntGrid.at(0, 0) = 10;
    int x = myIntGrid.at(0, 0).value_or(0);

    Grid<int> grid2(myIntGrid); //Copy constructor
    
    Grid<vector<int>> gridOfVectors;
    vector<int> myVector = { 1, 2, 3, 4};
    gridOfVectors.at(5, 6) = myVector;

    auto myGridOnHeap = make_unique<Grid<int>>(2,2); //2x2 Grid on the heap
    myGridOnHeap->at(0, 0) = 10;
    int xx = myGridOnHeap->at(0,0).value_or(0);

    return 0;
}
