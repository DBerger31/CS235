/*
@file
Project 1B
Created by Daniel Berger on 2/12/19

Instructor Implementation

*/

#include <string>
#include <iostream>
#include "CourseMember.hpp"
#include "Instructor.hpp"

using namespace std;

Instructor::Instructor(int id, std::string first, std:: string last) : CourseMember(id, first, last) { // Parameterized constructor derived from CourseMember
   id_ = id;
   first_name_ = first;
   last_name_ = last;
}
std::string Instructor::getOffice() const {
   return office_;
} // returns the office
std::string Instructor::getContact() const {
   return contact_;
} // returns the contact info
void Instructor::setOffice(const std::string office) {
   office_ = office;
} // sets the office
void Instructor::setContact(const std::string contact) {
   contact_ = contact;
} // sets the contact info
void Instructor::displayMember() {
   cout << first_name_ << " " << last_name_ << "- office: " << office_ << ", " << "email: " << contact_ << endl;
}
