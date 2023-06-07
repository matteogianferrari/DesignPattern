#include <cstring>
#include <iostream>
#include "FungiCell.h"


FungiCell::FungiCell(std::string& fungi):
    _mutex {},
    _fungi {fungi}
{
}
    

FungiCell::FungiCell(FungiCell& cell):
    _mutex {},  //Th mutex cannot be copied
    _fungi {cell._fungi}
{
}

FungiCell::~FungiCell()
{
}


ICell* FungiCell::clone(void)
{
    return new FungiCell {*this};
}


void FungiCell::absorb(void)
{
    std::cout << "The cell is absorbing nutrients." << std::endl;
}


void FungiCell::print(std::ostream& os)
{
    os << "Fungi cell:" << std::endl;
    os << "\t-Fungi type: " << _fungi << "(" << &_fungi << ")" << std::endl;
}
