class Skeet;

class Handlers{
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet) = 0;
};

class HandlerGameOver : public Handlers {
    public:
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerPellet : public Handlers {
    public:
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerMissile : public Handlers {
    public:
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerBomb : public Handlers {
    public:
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerMoveGun : public Handlers {
    public:
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerGuideMissile : public Handlers {
    public:
    bool handleRequest(const UserInput & ui, Skeet & skeet);
};