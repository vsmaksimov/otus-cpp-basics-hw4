#pragma once

#include "astnode.hpp"

class Div : public ASTNode {
  public:
    Div(ASTNode *lhs, ASTNode *rhs);
};