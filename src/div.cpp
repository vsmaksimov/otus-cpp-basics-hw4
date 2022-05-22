#include "div.hpp"

#include <string>

Div::Div(ASTNode *lhs, ASTNode *rhs)
    : ASTNode(std::string("/"), lhs, rhs)
    , lhs_{lhs}
    , rhs_{rhs} {}
