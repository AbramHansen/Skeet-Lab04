#include "handler.h"
#include "skeet.h"

bool HandlerGameOver::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // reset the game
    if (ui.isSpace())
    { 
        skeet.resetTime();
        skeet.resetScore();
        skeet.resetHitRatio();
        return true;
    } 

    return false;   
}

bool HandlerPellet::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // a pellet can be shot at any time
    if (ui.isSpace()) {
        Bullet *p = new Pellet(skeet.getGunAngle());
        skeet.bullets.push_back(p);
        skeet.score.adjust(-p->getValue());
        return true;
    }

    return false;
}

bool HandlerMissile::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // missiles can be shot at level 2 and higher
    if (ui.isM()) {
        Bullet *p = new Missile(skeet.getGunAngle());
        skeet.bullets.push_back(p);
        skeet.score.adjust(-p->getValue());
        return true;
    }

    return false;
}

bool HandlerBomb::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // bombs can be shot at level 3 and higher
    if (ui.isB()) {
        Bullet *p = new Bomb(skeet.getGunAngle());
        skeet.bullets.push_back(p);
        skeet.score.adjust(-p->getValue());
        return true;
    }

    return false;
}

bool HandlerMoveGun::handleRequest(const UserInput & ui, Skeet & skeet)
{
    // gather input from the interface
    skeet.moveGun(ui);
    return false;
}

bool HandlerGuideMissile::handleRequest(const UserInput & ui, Skeet & skeet)
{
    skeet.moveMissile(ui);
    return false;
}
