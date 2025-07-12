/**
 * File: divide.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Peforms an integer division operation on two Expression Objects.
 */
class Divide: public SubExpression
{
public:
    Divide(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() / right->evaluate();
    }
};