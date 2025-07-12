/**
 * File: operand.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * The Operand class defines the leaf nodes of what will be an expression tree constructed by the Expression Intepreter
 * for the evaluation of mathematical expressions. The Operand class contains the method parse that returns either a literal operand or a variable
 * operand.
 */
class Operand: public Expression
{
public:
    static Expression* parse(stringstream& in);
};
