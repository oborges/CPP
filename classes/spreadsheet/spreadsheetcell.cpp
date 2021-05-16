#include "spreadsheet.h"
#include <string.h>
#include <string_view>


using namespace std;


void SpreadsheetCell::setValue(double inValue)
{
    mValue = inValue;
}

double SpreadsheetCell::getValue() const
{
    return mValue;
}

void SpreadsheetCell::setString(std::string_view inString)
{
    mValue = stringToDouble(inString);
}

std::string SpreadsheetCell::getString() const
{
    return doubleToString(mValue);
}

std::string SpreadsheetCell::doubleToString(double inValue) const
{
    return to_string(inValue);
}

double SpreadsheetCell::stringToDouble(std::string_view inString) const
{
    return strtod(inString.data(), nullptr);
}

//constructors
SpreadsheetCell::SpreadsheetCell(double initialValue)
{
    setValue(initialValue);
}

SpreadsheetCell::SpreadsheetCell(std::string_view initialValue) : SpreadsheetCell(stringToDouble(initialValue))
{
    setString(initialValue);
}
