#include "sub.hpp"

#include <string>

Sub::Sub(ASTNode *lhs, ASTNode *rhs)
    : ASTNode(std::string("-"), lhs, rhs)
    , lhs_{lhs}
    , rhs_{rhs} {}
