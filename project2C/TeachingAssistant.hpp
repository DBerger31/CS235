/*
@file
Created by Daniel Berger on 2/12/19

Implementation of TeachingAssistant class
Student class consists of private vars major and gpa
and functions that set them
and a functon that returns the gpa
*/

#ifndef TeachingAssistant_hpp
#define TeachingAssistant_hpp

#include <string>
#include "CourseMember.hpp"
#include "Student.hpp"

enum ta_role {LAB_ASSISTANT, LECTURE_ASSISTANT, FULL_ASSISTANT};

class TeachingAssistant : public Student {
public:
   TeachingAssistant(int id, std::string first, std:: string last); // constructor
   int getHours() const; // returns number of hours
   ta_role getRole() const; // returns ta's role (type enum)
   void setHours(const int hours); // sets the ta's hours
   void setRole(const ta_role role); // sets ta's role
   virtual void displayMember() override; //prints first last major and gpa and ta role

private:
   int hours_per_week_; // number of hours ta works
   ta_role role_;
};

#endif // TeachingAssistant_hpp
