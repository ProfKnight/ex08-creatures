//
// Created by aknight on 8/5/18.
//

#ifndef CREATURE_CYBERDEMON_H
#define CREATURE_CYBERDEMON_H
#include "creature.h"

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    class CyberDemon: public Creature {
    private:
        static const std::string SPECIES;

    public:
        CyberDemon(): Creature() {}
        CyberDemon(int strength, int points): Creature(strength, points) {}

    public:
        const std::string &getSpecies() const { return SPECIES; }
        int getDamage() const;
    };

}}}}

#endif //CREATURE_CYBERDEMON_H
