/*
@file
Project 1B
Created by Daniel Berger on 2/12/19

Implementation of TeachingAssistant class
Student class consists of private vars major and gpa
and functions that set them
and a functon that returns the gpa
*/

enum ta_role {LAB_ASSISTANT, LECTURE_ASSISTANT, BOTH};

class TeachingAssistant {
public:
   TeachingAssistant(int id, std::string first, std:: string last); // constructor
   int getHours() const; // returns number of hours
   ta_role getRole() const; // returns ta's role (type enum)
   void setHours(const int hours); // sets the ta's hours
   void setRole(const ta_role role); // sets ta's role

private:
   int hours_per_week_; // number of hours ta works
   ta_role role_;
};
