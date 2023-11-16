#include "AbstractBirdOrder.h"
#include "bird.h"

BirdAdvanceOrder::BirdAdvanceOrder(Bird* receiver) : receiver(receiver) {}
BirdKillOrder::BirdKillOrder(Bird* receiver) : receiver(receiver) {}

void BirdAdvanceOrder::execute()
{
   receiver->advance();
}

void BirdKillOrder::execute()
{
   receiver->kill();
}