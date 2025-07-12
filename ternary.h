/**
 * File: ternary.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Returns the results of the left subEpxression if the conitional subExpression evaluates to true, 
 * returns the results of the right subExpression otherwise.
 */
class Ternary: public SubExpression
{
public:
    Ternary(Expression* left, Expression* right, Expression* condition): SubExpression(left, right)
    {
		this->condition = condition;
    }
    int evaluate()
    {
		return condition->evaluate() ? left->evaluate() : right->evaluate();
    }

private:
	Expression* condition;
};