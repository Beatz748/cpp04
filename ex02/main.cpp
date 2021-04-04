# include "ISpaceMarine.hpp"
# include "AssaultTerminator.hpp"
# include "TacticalMarine.hpp"
# include "Squad.hpp"
# include "ISquad.hpp"
int     main(void)
{
    Squad               *alpha = new Squad;


    TacticalMarine      *smart = new TacticalMarine;

    for (int i = 0; i < 100; i += 1)
    {
        std::cout << i << std::endl;
        alpha->push(new AssaultTerminator);
    }

    alpha->push(smart);
    alpha->push(smart);
    delete alpha;
    //sleep(30);
    return (0);
}
