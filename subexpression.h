/**
 * File: subexpression.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * The SubExpression class defines the node of a binary expression tree used for evaluating matematical expressions. The parse method
 * uses a switch statement to determine which of the sub classes of SubExpression should be called to evaluate the statement.
 */
class SubExpression: public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse(stringstream& in);
protected: 
    Expression* left;
    Expression* right;
};    