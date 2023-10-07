#include "LevelUpdater.h"

/******************************************************************
 * RANDOM
 * This function generates a random number.
 *
 *    INPUT:   min, max : The number of values (min <= num <= max)
 *    OUTPUT   <return> : Return the integer
 ****************************************************************/
int random(int min, int max)
{
   assert(min < max);
   int num = (rand() % (max - min)) + min;
   assert(min <= num && num <= max);

   return num;
}

void LevelUpdater::levelUpdate(std::list<Bird*>& birds) const {
   this->timedSpawn(birds);
   this->emptySpawn(birds);
}

void Level1::timedSpawn(std::list<Bird*>& birds) const {
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Standard(size, 7.0));
}

void Level1::emptySpawn(std::list<Bird*>& birds) const {
   if (birds.size() == 0 && random(0, 15) == 1)
      birds.push_back(new Standard(size, 7.0));
}

void Level2::timedSpawn(std::list<Bird*>& birds) const {
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Standard(size, 5.0, 12));
   if (random(0, 3 * 30) == 1)
      birds.push_back(new Sinker(size));
}

void Level2::emptySpawn(std::list<Bird*>& birds) const {
   if (birds.size() == 0 && random(0, 15) == 1)
      birds.push_back(new Standard(size, 7.0, 12));
}

void Level3::timedSpawn(std::list<Bird*>& birds) const {
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Standard(size, 5.0, 15));
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Sinker(size, 4.0, 22));
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Floater(size));
}

void Level3::emptySpawn(std::list<Bird*>& birds) const {
   if (birds.size() == 0 && random(0, 15) == 1)
      birds.push_back(new Standard(size, 5.0, 15));
}

void Level4::timedSpawn(std::list<Bird*>& birds) const {
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Standard(size, 4.0, 18));
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Sinker(size, 3.5, 25));
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Floater(size, 4.0, 25));
   if (random(0, 4 * 30) == 1)
      birds.push_back(new Crazy(size));
}

void Level4::emptySpawn(std::list<Bird*>& birds) const {
   if (birds.size() == 0 && random(0, 15) == 1)
      birds.push_back(new Standard(size, 4.0, 18));
}