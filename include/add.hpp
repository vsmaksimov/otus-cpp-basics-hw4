#pragma once

#include "astnode.hpp"

class Add : public ASTNode {
  public:
    Add(ASTNode *lhs, ASTNode *rhs);
};
