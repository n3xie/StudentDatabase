#include "Student.hpp"

#include <iomanip>

Student::Student(std::string n, std::string s, gender_t ge, uint64_t p,
                 address_t a, int i)
    : Record(n, s, ge, p, a), index(i) {}

int Student::getIndex() const { return index; }

void Student::showAll()
{
  std::cout << std::right << std::setw(13) << getName();
  std::cout << std::right << std::setw(13) << getSurname();
  std::cout << std::right << std::setw(9) << getIndex();
  std::cout << std::right << std::setw(14) << getPESEL();
  std::cout << std::right << std::setw(15);
  getAddress().displayAddress();


  std::cout << std::endl;
}
