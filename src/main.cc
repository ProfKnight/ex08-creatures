#include <iostream>

#include "creature.h"

using edu::vcccd::vc::csv13::Human;
using edu::vcccd::vc::csv13::CyberDemon;
using edu::vcccd::vc::csv13::Balrog;
using edu::vcccd::vc::csv13::Elf;

int main() {

    Human me;
    std::cout << "Hello, World: " << me.getSpecies() << ", Damage: " << me.getDamage() << std::endl;

    CyberDemon demon;
    std::cout << "Hello, World: " << demon.getSpecies() << ", Damage: " << demon.getDamage() << std::endl;

    Balrog joe;
    std::cout << "Hello, World: " << joe.getSpecies() << ", Damage: " << joe.getDamage() << std::endl;

    Elf dumbeldork;
    std::cout << "Hello, World: " << dumbeldork.getSpecies() << ", Damage: " << dumbeldork.getDamage() << std::endl;

    return 0;
}