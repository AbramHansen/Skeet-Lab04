class Skeet;
class UserInput;

class Handlers{
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet) = 0;
};

class HandlerGameOver : public Handlers {
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerPellet : public Handlers {
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerMissile : public Handlers {
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerBomb : public Handlers {
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerMoveGun : public Handlers {
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet);
};

class HandlerGuideMissile : public Handlers {
    public:
    virtual bool handleRequest(const UserInput & ui, Skeet & skeet);
};