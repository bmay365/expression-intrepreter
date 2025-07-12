/**
 * File: negation.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Peforms the Logical Not operation on an Expression Object. The second subExpression passed as an argument is always ignored.
 */
class Negation: public SubExpression
{
public:
    Negation(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return !(left->evaluate());
    }
};