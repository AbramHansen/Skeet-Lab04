#include "skeet.h"

class Handlers{
    public:
    virtual void handleRequest(const UserInput & ui, Skeet & skeet) = 0;
};

class HandlerGameOver{
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerPellet{
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerMissile{
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerBomb{
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerMoveGun{
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerGuideMissile{
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};