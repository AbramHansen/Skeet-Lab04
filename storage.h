
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
};
