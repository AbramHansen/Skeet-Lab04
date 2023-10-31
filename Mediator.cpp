#include "Mediator.h"

void Mediator::notify(Message message)
{
   for (AbstractColleague* colleague : colleagues)
   {
      colleague->notify(message);
   }
}

void Mediator::enroll(AbstractColleague* enrollee)
{
   colleagues.push_back(enrollee);
}

void Mediator::unenroll(AbstractColleague* enrollee)
{
   auto colleague = std::find(colleagues.begin(), colleagues.end(), enrollee);
   if (colleague != colleagues.end())
   {
      colleagues.erase(colleague);
   }
}