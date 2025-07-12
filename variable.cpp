/**
 * File: variable.cpp
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Class used to store variables as a leaf node of a binary expression tree. Stores a name and integer value.
 */
#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

int Variable::evaluate()
{
    return symbolTable.lookUp(name);
}