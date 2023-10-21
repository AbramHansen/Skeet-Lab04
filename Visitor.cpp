#include "Visitor.h"
#include "bird.h"
#include "bullet.h"
#include "effect.h"
void AdvanceVisitor::visitBird(Bird& bird)
{
   bird.advance();
   if (bird.isOutOfBounds())
   {
      bird.kill();
   }
}

void AdvanceVisitor::visitBullet(Bullet& bullet)
{
   std::list<Effect*> effects;
   bullet.move(effects);
   if (bullet.isOutOfBounds())
   {
      bullet.kill();
   }
}

void AdvanceVisitor::visitEffect(Effect& effect)
{
   effect.fly();
}

void KillVisitor::visitBird(Bird& bird)
{
   bird.kill();
}

void KillVisitor::visitBullet(Bullet& bullet)
{
   bullet.kill();
}

void KillVisitor::visitEffect(Effect& effect)
{
   
}