/***********************************************************************
 * Header File:
 *    SKEET
 * Author:
 *    Br. Helfrich
 * Summary:
 *    The game class
 ************************************************************************/

#pragma once

#include "position.h"
#include "uiInteract.h"
#include "bird.h"
#include "bullet.h"
#include "effect.h"
#include "gun.h"
#include "time.h"
#include "score.h"
#include "points.h"

#include <list>
#include <vector>

/*************************************************************************
 * Skeet
 * The game class
 *************************************************************************/
class Skeet 
{
friend class Handlers;

public:
    Skeet(Position & dimensions) : dimensions(dimensions),
        gun(Position(800.0, 0.0)), time(), score(), hitRatio(), bullseye(false) {}

    // handle all user input
    void interact(const UserInput& ui);

    // handle level input
    void setLevel(int level);

    // move the gameplay by one unit of time
    void animate();

    // output everything on the screen
    void drawLevel()  const;    // output the game
    void drawStatus() const;    // output the status information

    // is the game currently playing right now?
    bool isPlaying() const { return time.isPlaying();  }

    void resetTime() { time.reset(); }
    void resetScore() { score.reset(); }
    void resetHitRatio() { hitRatio.reset(); }
    double getGunAngle() { return gun.getAngle(); }
    void addBullets() { 
        Bullet *p = nullptr;
        if (nullptr != p)
            bullets.push_back(p); 
    }
    void adjustScore() { 
        Bullet *p = nullptr;
        score.adjust(0 - p->getValue()); 
    }

    void moveGun(const UserInput& ui) { ui.isUp(), ui.isDown(); }
    void moveMissile(const UserInput& ui) { ui.isUp(), ui.isDown(); }

private:
    // generate new birds
    void spawn();                  
    void drawBackground(double redBack, double greenBack, double blueBack) const;
    void drawTimer(double percent,
                   double redFore, double greenFore, double blueFore,
                   double redBack, double greenBack, double blueBack) const;
    void drawBullseye(double angle) const;

    std::list<Bird*> birds;        // all the shootable birds
    std::list<Bullet*> bullets;    // the bullets
    std::list<Effect*> effects;    // the fragments of a dead bird.
    std::list<Points>  points;     // point values;
    Position dimensions;           // size of the screen
    bool bullseye;
    std::vector<Handlers> handlers;
    Gun gun;                       // the gun
    Time time;                     // how many frames have transpired since the beginning
    Score score;                   // the player's score
    HitRatio hitRatio;             // the hit ratio for the birds
    HandlerGameOver handlerGameOver;
    HandlerPellet handlerPellet;            
    HandlerBomb handlerBomb;            
    HandlerMissile handlerMissile; 
    HandlerGuideMissile handlerGuideMissile;            
    HandlerMoveGun handlerMoveGun;                                   
};