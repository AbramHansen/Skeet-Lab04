#pragma once
#include "Colleague.h"
#include <vector>

struct Message
{
   enum type {BIRD_DIED, BULLET_FIRED};
   int value;
};

class Mediator
{
private:
   std::vector<AbstractColleague*> colleagues;

public:
   void notify(Message message);
   void enroll(AbstractColleague* enrollee);
   void unenroll(AbstractColleague* enrollee);
};

