/**
 * File: equality.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Returns 1 or true if two Expression operation evalute to the same integer value.
 */
class Equality: public SubExpression
{
public:
    Equality(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
		return left->evaluate() == right->evaluate();
    }
};