#include "storage.h"

// Controller
class Logic {
public:
    Logic();
    advance();
    spawn();
    input();
    begin();
    end();
    getFramesLeft();
    getLevelNumber();
    getGunAngle();
    isPlaying();
    isGameOver();
    getPercentLeft();
private:
    Storage storage;
};
