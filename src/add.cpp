#include "add.hpp"

#include <string>

Add::Add(ASTNode *lhs, ASTNode *rhs)
    : ASTNode(std::string("+"), lhs, rhs)
    , lhs_{lhs}
    , rhs_{rhs} {}
