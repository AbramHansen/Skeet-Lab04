#include "handler.h"

bool HandlerGameOver::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // reset the game
    if (ui.isSpace())
    { 
        skeet->time.reset();
        skeet->score.reset();
        skeet->hitRatio.reset();
        return true;
    } 

    return false;   
}

bool HandlerPellet::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // a pellet can be shot at any time
    if (ui.isSpace()) {
        Bullet *p = new Pellet(this->gun.getAngle());
        skeet->bullets.push_back(p);
        skeet->score.adjust(0 - p->getvalue());
        return true;
    }

    return false;
}

bool HandlerMissile::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // missiles can be shot at level 2 and higher
    if (ui.isM()) {
        Bullet *p = new Missile(this->gun.getAngle());
        skeet->bullets.push_back(p);
        skeet->score.adjust(0 - p->getvalue());
        return true;
    }

    return false;
}

bool HandlerBomb::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // bombs can be shot at level 3 and higher
    if (ui.isB()) {
        Bullet *p = new Bomb(this->gun.getAngle());
        this->bullets.push_back(p);
        this->score.adjust(0 - p->getvalue());
        return true;
    }

    return false;
}

bool HandlerMoveGun::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // gather input from the interface
    skeet->moveGun(ui.isUp(), ui.isDown());
    return false;
}

bool HandlerGuideMissile::handleRequest(const UserInput & ui, Skeet & skeet)
{
    skeet->moveMissile(ui.isUp(), ui.isDown());
    return false;
}
