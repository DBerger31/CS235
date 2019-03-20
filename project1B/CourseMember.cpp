/*
@file CourseMember.cpp
Project 1A
Created by Daniel Berger on 2/03/19

Implementation of CourseMember
Returns id, first name and last name
*/

#include "CourseMember.hpp"
#include "Student.hpp"
#include <iostream>
#include <string>


CourseMember::CourseMember(int num, std::string name, std::string surname){
  id_ = num;
  first_name_ = name;
  last_name_ = surname;
}

int CourseMember::getID() const{ // returns id
  return id_;
}

std::string CourseMember::getFirstName() const{ // returns first name
  return first_name_;
}

std::string CourseMember::getLastName() const{ // returns last name
  return last_name_;
}
