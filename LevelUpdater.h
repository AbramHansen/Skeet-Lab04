#pragma once
#include "Bird.h"
#include "time.h"
#include <list>

class Bird;
class Time;

class LevelUpdater {
public:
   void levelUpdate(std::list<Bird*> birds) const;

protected:
   virtual void timedSpawn(std::list<Bird*> birds) const = 0;
   virtual void emptySpawn(std::list<Bird*> birds) const = 0;
};

class Level1 : public LevelUpdater {
protected:
   int size = 30;
   void timedSpawn(std::list<Bird*> birds) const override;
   void emptySpawn(std::list<Bird*> birds) const override;
};

class Level2 :  public LevelUpdater {
protected:
   int size = 25;
   void timedSpawn(std::list<Bird*> birds) const override;
   void emptySpawn(std::list<Bird*> birds) const override;
};

class Level3 : public LevelUpdater {
protected:
   int size = 20;
   void timedSpawn(std::list<Bird*> birds) const override;
   void emptySpawn(std::list<Bird*> birds) const override;
};

class Level4 : public LevelUpdater {
protected:
   int size = 15;
   void timedSpawn(std::list<Bird*> birds) const override;
   void emptySpawn(std::list<Bird*> birds) const override;
};