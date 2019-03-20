/*
@file
Project 1B
Created by Daniel Berger on 2/12/19

TA header
*/

#include <iostream>
#include <string>
#include "CourseMember.hpp"
#include "Student.hpp"
#include "TeachingAssistant.hpp"


TeachingAssistant:: TeachingAssistant(int id, std::string first, std:: string last) : Student(id, first, last) { // Parameterized constructor derived from student
   id_ = id;
   first_name_ = first;
   last_name_ = last;
}

int TeachingAssistant::getHours() const  // returns hours of work
   return hours_per_week_;
}

ta_role TeachingAssistant::getRole() const { // returns ta role
   return role_;
}

void TeachingAssistant::setHours(const int hours) { 
   hours_per_week_ = hours;
} // sets the ta's hours
void TeachingAssistant::setRole(const ta_role role) {
   role_ = role;
} // sets ta's role
