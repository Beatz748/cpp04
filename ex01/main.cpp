#include <string>
#include <iostream>

#include <unistd.h>

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    std::cout << std::endl;

    SuperMutant*    m = new SuperMutant();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(m);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(m);
    std::cout << *me;
    me->attack(m);
    std::cout << *me;
    me->attack(m);
    std::cout << std::endl;

    std::cout << "RECOVER_AP for 10 times" << std::endl;
    for (int i = 0; i < 10; i += 1) {

        me->recoverAP();
    }
    std::cout << *me;
    delete m;
    delete me;
    return 0;
}
