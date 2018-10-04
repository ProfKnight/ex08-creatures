//
// Created by aknight on 8/5/18.
//

#include "human.h"

using std::string;

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    const string Human::SPECIES = "Human";

    Human::Human(): Creature() {
    }

    Human::Human(int strength, int points): Creature(strength, points) {
    }

}}}}