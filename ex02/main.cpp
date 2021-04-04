#include <iostream>
#include <unistd.h>

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int     main(void)
{
    Squad               *alpha = new Squad;


    TacticalMarine      *smart = new TacticalMarine;

    for (int i = 0; i < 100; i += 1)
        alpha->push(new AssaultTerminator);

    alpha->push(smart);
    alpha->push(smart);
    delete alpha;
    sleep(30);
    return (0);
}
