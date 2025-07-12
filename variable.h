/**
 * File: variable.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Class used to store variables as a leaf node of a binary expression tree. Stores a name and integer value.
 */
class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    int evaluate();
private:
    string name;
};