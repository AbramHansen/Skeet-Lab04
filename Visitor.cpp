#include "Visitor.h"
#include "bird.h"
#include "bullet.h"
#include "effect.h"
void AdvanceVisitor::visitBird(Bird& bird)
{
   bird.advance();
}

void AdvanceVisitor::visitBullet(Bullet& bullet)
{
   std::list<Effect*> effects;
   bullet.move(effects);
}

void AdvanceVisitor::visitEffect(Effect& effect)
{
   effect.fly();
}

void KillVisitor::visitBird(Bird& bird)
{
   bird.kill();
   bird.setPoints(bird.getPoints() * -1);
}

void KillVisitor::visitBullet(Bullet& bullet)
{
   bullet.kill();
   bullet.setValue(bullet.getValue() * -1);
}

void KillVisitor::visitEffect(Effect& effect)
{
   
}