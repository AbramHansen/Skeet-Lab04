#include "logic.h"
#include "uiInteract.h"

// View
template <typename T>
class Interface {
public:
    Interface();
    void input(const UserInput & ui);
    void processing();
    void output();
private:
    Logic logic;
};
