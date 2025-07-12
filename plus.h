/**
 * File: plus.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Peforms an integer additon operation on two Expression Objects.
 */
class Plus: public SubExpression
{
public:
    Plus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() + right->evaluate();
    }
};