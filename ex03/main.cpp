#include <iostream>

#include <unistd.h>

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void    test() {

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    me->use(2, *bob);
    me->equip(tmp);
    me->use(2, *bob);

    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(2, *bob);
    me->use(3, *bob);
    tmp = src->createMateria("ice");
    me->use(3, *bob);
    std::cout << src->createMateria("random") << std::endl;

    delete tmp;
    delete bob;
    delete me;
    delete src;
}

int     main()
{
    test();
    test();
    test();
    test();
    test();
    test();
    sleep(20);
    return 0;
}
