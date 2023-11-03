
using namespace std;

// Model
template <typename T>
class Storage {
public:
    Storage();
    int getPoints();
    int getNumKilled();
    int getNumMissed();
    iterator begin();
    iterator end();
    iterator beginBird();
    iterator endBird();
    iterator beginBullet();
    iterator endBullet();
    void setDimentions(Position dimentions);
    void add(elements);
    void reset();
private:
    Element elements;
    int numBirds;
    int points;
    int numKilled;
    StorageTime time;
    StorageGun gun;
    iterator iterator;
    Position dimentions;
};

class StorageTime
{
   // number of frames left in this level
   int framesLeft;

   // the level number we are currently in
   int levelNumber;

   // length in seconds of each level
   std::array<int, 5> levelLength;
};

class StorageGun
{
private:
   double angle;
   Position pt;
};