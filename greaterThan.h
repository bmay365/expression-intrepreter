/**
 * File: greaterThan.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Peforms the logical Greater Than operation on two Expression Objects. Returns an integer 1 if true.
 */
class GreaterThan: public SubExpression
{
public:
    GreaterThan(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
		return left->evaluate() > right->evaluate();
    }
};