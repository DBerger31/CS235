#include <iostream>
#include <string>
#include "CourseMember.hpp"
#include "Student.hpp"
#include "TeachingAssistant.hpp"
#include "Instructor.hpp"
#include <iostream>
#include <string>

int main(){

   /*
   Student Daniel(15105810, "Daniel", "Berger"); // instantiation of CourseMember calls constructor
   Daniel.setMajor("Computer Science");
   Daniel.setGpa(3.5);
   int gpa = Daniel.getGpa();
   std::string major = Daniel.getMajor();
   std::cout << gpa << std::endl;
   std::cout << major << std::endl;
   */


   TeachingAssistant Daniel(15105810, "Daniel", "Berger"); // instantiation of CourseMember calls constructor
   Daniel.setRole(LAB_ASSISTANT);
   Daniel.setHours(5.0);
   int hours = Daniel.getHours();
   ta_role role = Daniel.getRole();
   std::cout << hours << std::endl;
   std::cout << role << std::endl;


return 0;
}
