#include "engineer.hpp"

#include <iostream>

#include "person.hpp"

Engineer::Engineer() {}

std::ostream& operator<<(std::ostream& out, const Engineer& operand) {
  out << "Engineer [Full name : " << operand.get_full_name()
      << ",age : " << operand.get_age()
      << ",address : " << operand.get_address()
      << ",contract_count : " << operand.contract_count << "]";
  return out;
}

Engineer::~Engineer() {}
