#include "mul.hpp"

#include <string>

Mul::Mul(ASTNode *lhs, ASTNode *rhs)
    : ASTNode("*", lhs, rhs) {}
