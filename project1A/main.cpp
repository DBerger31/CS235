#include "CourseMember.hpp"
#include "CourseMember.cpp"
#include <iostream>
#include <string>

int main(){

  CourseMember Daniel(15105810, "Daniel", "Berger"); // instantiation of CourseMember calls constructor
  int id = Daniel.getID();
  std::string name = Daniel.getFirstName();
  std::string lastname = Daniel.getLastName();
  std::cout << id << std::endl;
  std::cout << name << std::endl;
  std::cout << lastname << std::endl;

return 0;
}
