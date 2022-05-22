#include "mul.hpp"

#include <string>

Mul::Mul(ASTNode *lhs, ASTNode *rhs)
    : ASTNode(std::string("*"), lhs, rhs)
    , lhs_{lhs}
    , rhs_{rhs} {}
