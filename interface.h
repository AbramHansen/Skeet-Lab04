#include "logic.h"
#include "uiInteract.h"

// View
//template <typename T>
class Interface {
public:
    Interface();
    void input(const UserInput & ui);
    void processing();
    void output();
private:
    Logic logic;

    void drawBackground(double redBack, double greenBack, double blueBack) const;
    void drawTimer(double percent,
       double redFore, double greenFore, double blueFore,
       double redBack, double greenBack, double blueBack) const;
    void drawBullseye(double angle) const;
    void drawLevel() const;
    void drawStatus() const;
};