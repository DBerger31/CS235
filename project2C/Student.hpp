/*
@file
Created by Daniel Berger on 2/12/19

Student header
*/

#ifndef Student_hpp
#define Student_hpp

#include <string>
#include "CourseMember.hpp"

class Student : public CourseMember {
public:
   Student(int id, std::string first, std:: string last); // constructor
   std::string getMajor() const; // returns students major
   double getGpa() const; // returns students gpa
   void setMajor(const std::string major); // sets the students major
   void setGpa(const double gpa); // sets student gpa
   virtual void displayMember() override; //prints first last major and gpa

protected:
   std::string major_; // major of student
   double gpa_; // gpa of student
};

#endif // Student_hpp
