#include "player.hpp"

#include <iostream>

#include "person.hpp"

Player::Player() {}

std::ostream& operator<<(std::ostream& out, const Player& player) {
  out << "Player[Full name : " << player.get_full_name()
      << ",age : " << player.get_age() << ",address : " << player.get_address()
      << "]";
  return out;
}

Player::~Player() {}