//
// Created by aknight on 8/5/18.
//

#include "elf.h"
#include <random>
#include <chrono>

using std::string;

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    const string Elf::SPECIES = "Elf";

    int Elf::getDamage() const {
        int damage = Creature::getDamage();

        std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> damageDistribution(0, 99);
        int more = damageDistribution(generator);

        if (more < 10) {
            damage *= 2;
        }

        return damage;
    }

}}}}
