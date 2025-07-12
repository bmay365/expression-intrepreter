/**
 * File: parse.cpp
 * Author: Brian Mayfield
 * Date: May 10, 2022
 * The Parse class is a utility class designed to help parse out variable names from an expression input source.
 */
#include <cctype>
#include <iostream>
#include <sstream>

#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& in)
{
    char alnum;
    string name = "";

    in >> ws;
    while (isalnum(in.peek()))
    {
        in >> alnum;
        name += alnum;
    }
    return name;
}