// Model
class Storage {
public:
    Storage();
    getPoints();
    getNumKilled();
    getNumMissed();
    begin();
    end();
    beginBird();
    endBird();
    beginBullet();
    endBullet();
    add(elements);
    reset();
private:
    Element elements;
    int numBirds;
    int points;
    int numKilled;
    StorageTime time;
    StorageGun gun;
};
