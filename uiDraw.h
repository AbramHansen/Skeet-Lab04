#include "skeet.h"
#include "bird.h"
#include "bullet.h"
#include "effect.h"

// Abstract DrawAdapter class
class DrawAdapter {
public:
    virtual ~DrawAdapter() = default;
    virtual void drawStandard() const = 0;
    virtual void drawSinker() const = 0;
    virtual void drawFloater() const = 0;
    virtual void drawCrazy() const = 0;
    virtual void drawPellet() const = 0;
    virtual void drawMissile() const = 0;
    virtual void drawBomb() const = 0;
    virtual void drawFragment() const = 0;
    virtual void drawShrapnel() const = 0;
    virtual void drawBackground() const = 0;
    virtual void drawTimer() const = 0;
    virtual void drawText() const = 0;
};

// SkeetDrawAdapter implementing the DrawAdapter
class SkeetDrawAdapter : public DrawAdapter {
private:
    Skeet& skeet;

public:
    SkeetDrawAdapter(Skeet& s) : skeet(s) {}

    // Implementing the draw methods using the Skeet class methods
    void drawBackground() const override;
    void drawTimer() const override;
    void drawText() const override;
};

// SkeetDrawAdapter implementing the DrawAdapter
class BirdDrawAdapter : public DrawAdapter {
private:
    Bird& bird;

public:
    BirdDrawAdapter(Bird& b) : bird(b) {}

    // Implementing the draw methods using the Skeet class methods
    void drawStandard() const override;
    void drawSinker() const override;
    void drawFloater() const override;
    void drawCrazy() const override;
};

// SkeetDrawAdapter implementing the DrawAdapter
class BulletDrawAdapter : public DrawAdapter {
private:
    Bullet& bullet;

public:
    BulletDrawAdapter(Bullet& bu) : bullet(bu) {}

    // Implementing the draw methods using the Skeet class methods
    void drawPellet() const override;
    void drawMissile() const override;
    void drawBomb() const override;
};

// SkeetDrawAdapter implementing the DrawAdapter
class EffectDrawAdapter : public DrawAdapter {
private:
    Effect& effect;

public:
    EffectDrawAdapter(Effect& e) : effect(e) {}

    // Implementing the draw methods using the Skeet class methods
    void drawFragment() const override;
    void drawShrapnel() const override;
};