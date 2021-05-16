#include <cstddef>
#include <utility>

#include "spreadsheet.h"

Spreadsheet::Spreadsheet(size_t width, size_t height)
    : mWidth(width), mHeight(height)
{
    mCells = new SpreadsheetCell*[mWidth];
    for (size_t i = 0; i < mWidth; ++i) {
        mCells[i] = new SpreadsheetCell[mHeight];
    }
}

void Spreadsheet::setCellAt(size_t x, size_t y, const SpreadsheetCell& cell)
{
    verifyCoordinate(x, y);
    mCells[x][y] = cell;
}

SpreadsheetCell& Spreadsheet::getCellAt(size_t x, size_t y)
{
    verifyCoordinate(x, y);
    return mCells[x][y];
}

void verifyCoordinate(size_t x, size_t y) const
{
    if (x >= mWidth || y >= mHeight) {
        throw std::out_of_range("");
    }
}


Spreadsheet::˜Spreadsheet()
{
    for (size_t i = 0; i < mWdidth; ++i) {
        delete [] mCells[i];
    }

    delete [] mCells;
    mCells = nullptr;
}

Spreadsheet(const Spreadsheet& src)
    : Spreadsheet(src.mWidth, src.mHeight)
{
    for (size_t i = 0; i < mWidth; ++i) {
        for (size_t j = 0; j < mHeight; j++) {
            mCells[i][j] = src.mCells[i][j];
        }
    }
}

Spreadsheet& Spreadsheet::operator=(const Spreadsheet& rhs)
{
    
    //this is the pattern recommended to implement assingments operators because it
    // guarantees strong exception safety
    
    //check for self-assignment
    if (this == *rhs) {
        return *this;
    }

    Spreadsheet temp(rhs); //Do all the work in a temporary instance 
    swap(*this, temp); //Commit the work with the only non-throwing operations
    return *this;
}

friend void swap(Spreadsheet& first, SpreadsheetCell& second) noexcept
{
    using std::swap;

    swap(first.mWidth, second.mWidth);
    swap(first.mHeight, second.mHeight);
    swap(first.mCells, second.mCells);
}

void Spreadsheet::cleanup() noexcept
{
    for (size_t i = 0; i < mWidth; ++i) {
        delete[] mCells[i];
    }

    delete[] mCells;
    mCells = nullptr;
    mWidth = mHeight = 0;
}

void Spreadshet::moveFrom(Spreadsheet& src) noexcept
{
    //Shallow copy of data
    mWidth = src.mWidth;
    mHeight = src.mHeight;
    mCells = src.mCells;

    //Reset the source object, because ownership has been moved!
    src.mWidth = 0;
    src.mHeight = 0;
    src.mCells = nullptr;
}

//Move Constructor
Spreadsheet::Spreadsheet(Spreadsheet&& src) noexcept
{
    moveFrom(src);
}

//Move assignment operator
Spreadsheet& Spreadsheet::operator=(Spreadsheet&& rhs) noexcept
{
    //check for self-assignment
    if (*this == &rhs) {
        return *this;
    }

    //free the old memory
    cleanup();

    moveFrom(rhs);

    return *this;
}