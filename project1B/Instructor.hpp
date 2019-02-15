/*
@file
Project 1B
Created by Daniel Berger on 2/12/19

Implementation of Instructor class
Student class consists of private vars major and gpa
and functions that set them
and a functon that returns the gpa
*/


class Instructor {
public:
   Instructor(int id, std::string first, std:: string last); // constructor
   std::string getOffice() const; // returns the office
   std::string getContact() const; // returns the contact info
   void setOffice(const std::string office); // sets the office
   void setContact(const std::string contact); // sets the contact info

private:
   std::string office_; // office for professor
   std::string contact_; // contact info for professor
   
};
