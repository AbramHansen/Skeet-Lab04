#pragma once
//to avoid circular dependencies
class Bird;
class Bullet;
class Effect;
class Skeet;
class Visitor
{
public:
   virtual void visitBird(Bird& bird) = 0;
   virtual void visitBullet(Bullet& bullet) = 0;
   virtual void visitEffect(Effect& effect) = 0;
};

class AdvanceVisitor : public Visitor
{
public:
   virtual void visitBird(Bird& bird);
   virtual void visitBullet(Bullet& bullet);
   virtual void visitEffect(Effect& effect);
};

class KillVisitor : public Visitor
{
public:
   virtual void visitBird(Bird& bird);
   virtual void visitBullet(Bullet& bullet);
   virtual void visitEffect(Effect& effect);
};