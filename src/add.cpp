#include "add.hpp"

#include <string>

Add::Add(ASTNode *lhs, ASTNode *rhs)
    : ASTNode("+", lhs, rhs) {}
