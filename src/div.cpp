#include "div.hpp"

#include <string>

Div::Div(ASTNode *lhs, ASTNode *rhs)
    : ASTNode("/", lhs, rhs) {}
