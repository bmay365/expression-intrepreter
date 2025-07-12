/**
 * File: expression.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * Abstract class used to facilitate the derivation of specialized subExpression Objects.
 */
class Expression
{
public: 
    virtual int evaluate() = 0;
};