/*
@file
Created by Daniel Berger on 2/12/19

TA header
*/

#include <iostream>
#include <string>
#include "CourseMember.hpp"
#include "Student.hpp"
#include "TeachingAssistant.hpp"

using namespace std;

TeachingAssistant:: TeachingAssistant(int id, std::string first, std:: string last) : Student(id, first, last) { // Parameterized constructor derived from student
   id_ = id;
   first_name_ = first;
   last_name_ = last;
}

int TeachingAssistant::getHours() const {  // returns hours of work
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

void TeachingAssistant::displayMember() {
   string time = "";
   //full time or part time depending on hours worked
   if (hours_per_week_ < 8){
      time = "part-time";
   }
   else {
      time = "full-time";
   }
   string role = "";
   //converts enum to string pretty much
   if (role_ == 0){
      role = "LAB_ASSISTANT";
   }
   else if (role_ == 1){
      role = "LECTURE_ASSISTANT";
   }
   else { role = "FULL_ASSISTANT"; }

   cout << first_name_ << " " << last_name_ << " majors in " << major_ << " with gpa: " << gpa_ << " working " << time << " as a " << role << endl;
}
