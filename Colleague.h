#pragma once
#include "Mediator.h"
#include "bird.h"
#include "bullet.h"

class AbstractColleague
{
protected:
   Mediator* pMediator;
public:
   virtual void notify(Message message) = 0;
};

class HitRatioColleague : AbstractColleague
{
public:
   HitRatioColleague(Mediator* mediator)
   {
      this->pMediator = mediator;
      pMediator->enroll(this);
   }
   void notify(Message message);
};

class ScoreColleague : AbstractColleague
{
public:
   ScoreColleague(Mediator* mediator)
   {
      this->pMediator = mediator;
      pMediator->enroll(this);
   }
   void notify(Message message);
};

class BulletColleague : AbstractColleague
{
private:
   Bullet* pBullet;
public:
   BulletColleague(Mediator* mediator)
   {
      this->pMediator = mediator;
      pMediator->enroll(this);
   }
   void notify(Message message);
   void firedBullet();
};

class BirdColleague : AbstractColleague
{
private:
   Bird* pBird;
public:
   BirdColleague(Mediator* mediator)
   {
      this->pMediator = mediator;
      pMediator->enroll(this);
   }
   void notify(Message message);
   void wentOutOfBounds();
   void wasShot();
};

