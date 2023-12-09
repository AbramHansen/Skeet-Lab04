#include "uiDraw.h"


// Bird Draw Methods
void BirdDrawAdapter::drawStandard() const
{
    bird.drawStandard(); 
}

void BirdDrawAdapter::drawSinker() const
{
    bird.drawSinker();
}

void BirdDrawAdapter::drawFloater() const
{
    bird.drawFloater();
}

void BirdDrawAdapter::drawCrazy() const
{
    bird.drawCrazy();
}

// Bullet Draw Methods
void BulletDrawAdapter::drawPellet() const
{
    bullet.drawPellet();
}

void BulletDrawAdapter::drawMissile() const
{
    bullet.drawMissile();
}

void BulletDrawAdapter::drawBomb() const
{
    bullet.drawBomb();
}

// Effect Draw Methods
void EffectDrawAdapter::drawFragment() const
{
    effect.drawFragment();
}

void EffectDrawAdapter::drawShrapnel() const
{
    effect.drawShrapnel();
}

// Skeet Draw Methods
void SkeetDrawAdapter::drawBackground() const
{
    skeet.drawBackground();
}

void SkeetDrawAdapter::drawTimer() const
{
    skeet.drawTimer();
}

void SkeetDrawAdapter::drawText() const 
{
    skeet.drawText();
}