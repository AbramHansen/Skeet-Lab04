#pragma once
#include "position.h"
#include <list>
class Effect;
class Flyer
{
protected:
   Position pt;
   Velocity v;
   bool dead;
   double radius;

public:
   Position getPosition() const { return pt; }
   Velocity getVelocity() const { return v; }
   bool isDead() const { return dead; }
   virtual void draw() const = 0;
   virtual void move(std::list<Effect*>& effects) = 0;
   void kill() { dead = true; }
};

