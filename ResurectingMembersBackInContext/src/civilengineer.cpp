
#include "civilengineer.hpp"

#include <iostream>

#include "engineer.hpp"
#include "person.hpp"

CivilEngineer::CivilEngineer() {}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand) {
  out << "CivilEngineer [Full name : " << operand.get_full_name()
      << ",age : " << operand.get_age()
      << ",address : " << operand.get_address()
      << ",contract_count : " << operand.get_contract_count()
      << ",speciality : " << operand.m_speciality << "]";

  return out;
}

CivilEngineer::~CivilEngineer() {}