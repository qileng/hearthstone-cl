#ifndef HEARTHSTONE_CL_HERO_H
#define HEARTHSTONE_CL_HERO_H

#include "HeroClass.h"

// http://www.hearthhead.com/heroes

class Hero : public Character {
private:
  std::string name;
  HeroClass heroClass;
  int health;
  int armor;

public:
  Hero();
  ~Hero();
};

#endif // HEARTHSTONE_CL_HERO_H
