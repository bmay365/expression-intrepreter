/**
 * File: minus.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Peforms an integer subtraction operation on two Expression Objects.
 */
class Minus: public SubExpression
{
public:
    Minus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() - right->evaluate();
    }
};