#include <string>
#include <string_view>

class SpreadsheetCell
{
    public:
        SpreadsheetCell() = default;
        SpreadsheetCell(double initialValue);
        SpreadsheetCell(std::string_view initialValue);
        ~SpreadsheetCell();
        
        void setValue(double inValue);
        double getValue() const;

        void setString(std::string_view inString);
        std::string getString() const;
    
    private:
        std::string doubleToString(double inValue) const;
        double stringToDouble(std::string_view inString) const;
        double mValue = 0;
};

class Spreadsheet
{
    public:
        Spreadsheet(size_t width, size_t height);
        Spreadsheet(const Spreadsheet& src);
        Spreadsheet(Spreadsheet&& src) noexcept; //Move constructor
        Spreadsheet& operator=(const Spreadsheet&& rhs) noexcept; //Move assign 
        Spreadsheet& operator=(const Spreadsheet& rhs);
        
        friend void swap(Spreadsheet& first, SpreadsheetCell& second) noexcept;
        void setCellAt(size_t x, size_t y, const SpreadSheetCell& cell);
        SpreadsheetCell& getCellAt(size_t x, size_t y);
    
    private:
        void cleanup() noexcept;
        void moveFrom(Spreadsheet& src) noexcept;
        bool inRange(size_t value, size_t upper) const;
        void verifyCoordinate(size_t x, size_t y) const;
        size_t mWidth = 0;
        size_t mHeight = 0;
        SpreadsheetCell** mCells = nullptr; 
};

