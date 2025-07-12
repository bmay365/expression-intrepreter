/**
 * File: and.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Peforms the logical And operation on two Expression Objects. Returns an integer 1 if true.
 */
class And: public SubExpression
{
public:
    And(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
		return left->evaluate() && right->evaluate();
    }
};