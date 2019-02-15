#include "CourseMember.hpp"
//#include "CourseMember.cpp"
#include "Student.hpp"
//#include "Student.cpp"
#include <iostream>
#include <string>

int main(){

   //CourseMember Daniel(15105810, "Daniel", "Berger"); // instantiation of CourseMember calls constructor
   Student Daniel(15105810, "Daniel", "Berger"); // instantiation of CourseMember calls constructor
   //int id = Daniel.getID();
   //std::string name = Daniel.getFirstName();
   //std::string lastname = Daniel.getLastName();
   //std::cout << id << std::endl;
   //std::cout << name << std::endl;
   //std::cout << lastname << std::endl;

   Daniel.setMajor("Computer Science");
   Daniel.setGpa(3.5);

   int gpa = Daniel.getGpa();
   std::string major = Daniel.getMajor();

   std::cout << gpa << std::endl;
   std::cout << major << std::endl;

return 0;
}
