//
// Created by aknight on 8/5/18.
//

#ifndef CREATURE_ELF_H
#define CREATURE_ELF_H
#include "creature.h"

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    class Elf: public Creature {
    private:
        static const std::string SPECIES;

    public:
        Elf(): Creature() {}
        Elf(int strength, int points): Creature(strength, points) {}

    public:
        const std::string &getSpecies() const { return SPECIES; }
        int getDamage() const;
    };

}}}}
#endif //CREATURE_ELF_H
