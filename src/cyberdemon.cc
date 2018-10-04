//
// Created by aknight on 8/5/18.
//
#include "cyberdemon.h"
#include <random>
#include <chrono>

using std::string;

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    const string CyberDemon::SPECIES = "Cyber Demon";

    int CyberDemon::getDamage() const {
        int damage = Creature::getDamage();

        std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> damageDistribution(0, 99);
        int more = damageDistribution(generator);

        if (more < 5) {
            damage = damage + 50;
        }

        return damage;
    }

}}}}
