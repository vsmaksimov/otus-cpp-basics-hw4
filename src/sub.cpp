#include "sub.hpp"

#include <string>

Sub::Sub(ASTNode *lhs, ASTNode *rhs)
    : ASTNode("-", lhs, rhs) {}
