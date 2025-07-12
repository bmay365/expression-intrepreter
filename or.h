/**
 * File: or.h
 * Author: Brian Mayfield
 * Date: May 10, 2022 
 * Peforms the logical Or operation on two Expression Objects. Returns an integer 1 if true.
 */
class Or: public SubExpression
{
public:
    Or(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
		return left->evaluate() || right->evaluate();
    }
};