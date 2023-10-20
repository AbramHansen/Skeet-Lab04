#pragma once
//until implemented
#include "Visitor.h"

class Element
{
public:
   virtual void accept(Visitor* visitor) = 0;
};

