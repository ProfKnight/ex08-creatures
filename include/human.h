//
// Created by aknight on 8/5/18.
//

#ifndef CREATURE_HUMAN_H
#define CREATURE_HUMAN_H
#include "creature.h"

#include <string>

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    class Human: public Creature {
    private:
        static const std::string SPECIES;

    public:
        Human();
        Human(int strength, int points);

    public:
        virtual const std::string& getSpecies() const { return SPECIES; }

    };

}}}}
#endif //CREATURE_HUMAN_H
