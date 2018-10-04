//
// Created by aknight on 8/5/18.
//

#ifndef CREATURE_BALROG_H
#define CREATURE_BALROG_H
#include "creature.h"

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    class Balrog: public Creature {
    private:
        static const std::string SPECIES;

    public:
        Balrog(): Creature() {}
        Balrog(int strength, int points): Creature(strength, points) {}

    public:
        const std::string &getSpecies() const { return SPECIES; }
        int getDamage() const;
    };

}}}}
#endif //CREATURE_BALROG_H
