/*
@file
Created by Daniel Berger on 2/12/19

Instructor header
*/

#ifndef Instructor_hpp
#define Instructor_hpp

#include <string>
#include "CourseMember.hpp"

class Instructor : public CourseMember {
public:
   Instructor(int id, std::string first, std:: string last); // constructor
   std::string getOffice() const; // returns the office
   std::string getContact() const; // returns the contact info
   void setOffice(const std::string office); // sets the office
   void setContact(const std::string contact); // sets the contact info
   virtual void displayMember() override; // prints first last office and email

private:
   std::string office_; // office for professor
   std::string contact_; // contact info for professor

};

#endif // Instructor_hpp
