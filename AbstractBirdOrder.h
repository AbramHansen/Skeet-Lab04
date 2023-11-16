#pragma once
class Bird;
class AbstractBirdOrder
{
public:
   virtual void execute() = 0;
};

class BirdAdvanceOrder : public AbstractBirdOrder
{
private:
   Bird* receiver;
public:
   BirdAdvanceOrder(Bird* receiver);
   void execute();
};

class BirdKillOrder : public AbstractBirdOrder
{
private:
   Bird* receiver;
public:
   BirdKillOrder(Bird* receiver);
   void execute();
};
