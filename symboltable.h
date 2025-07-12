/**
 * File: symboltable.h
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * The symbol table stores the varibales and their correspnding values from the expression input for later
 * use withiin the compuation of the epxression.
 */
class SymbolTable
{
public:
    SymbolTable() {}
    void insert(string variable, int value);
    int lookUp(string variable) const;
	void init();
private:
    struct Symbol
    {
        Symbol(string variable, int value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        int value;
    };
    vector<Symbol> elements;
};


