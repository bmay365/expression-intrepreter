/**
 * File: lessThan.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Peforms the logical Less Than operation on two Expression Objects. Returns an integer 1 if true.
 */
class LessThan: public SubExpression
{
public:
    LessThan(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
		return left->evaluate() < right->evaluate();
    }
};