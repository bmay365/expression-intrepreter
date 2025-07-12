/**
 * File: literal.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Class designed to hold literal integer values used in computation in conjuction with other subExpressions
 * in the Expression Intepreter.
 */
class Literal: public Operand
{
public:
    Literal(int value)
    {
        this->value = value;
    }
    int evaluate()
    {
        return value;
    }
private:
    int value;
};