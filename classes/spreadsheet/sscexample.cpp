#include "spreadsheet.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
    SpreadsheetCell cellOnStack(5);
    auto cellOnHeap = make_unique<SpreadsheetCell>(10);

    cout << "CellOnStack: " << cellOnStack.getValue() << endl;
    cout << "CellOnHeap: " << cellOnHeap->getValue() << endl;
    

    SpreadsheetCell aThirdCell("test"); //uses string-arg ctor
    SpreadsheetCell aFourthCell(4.4);   //uses double-arg ctor

    auto aFifthCellp = make_unique<SpreadsheetCell>("5.5"); //string-arg ctor

    cout << "aThirdCell: " << aThirdCell.getValue() << endl;
    cout << "aFourthCell: " << aFourthCell.getValue() << endl;
    cout << "AFifthCellp: " << aFifthCellp->getValue() << endl;

    return 0;
}