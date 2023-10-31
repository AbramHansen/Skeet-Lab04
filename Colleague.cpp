#include "Colleague.h"

void BirdColleague::wentOutOfBounds()
{
   Message message;
   message.BIRD_DIED;
   message.value = -pBird->getPoints();
   pMediator->notify(message);
}

void BirdColleague::wasShot()
{
   Message message;
   message.BIRD_DIED;
   message.value = pBird->getPoints();
   pMediator->notify(message);
}

void BulletColleague::firedBullet()
{
   Message message;
   message.BULLET_FIRED;
   message.value = pBullet->getValue();
   pMediator->notify(message);
}

void ScoreColleague::notify(Message message)
{
   pStatus.adjust(message.value);
}

void HitRatioColleague::notify(Message message)
{
   if (message.BIRD_DIED)
   {
      pStatus.adjust(message.value);
   }
}