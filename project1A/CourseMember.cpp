/*
@file CourseMember.cpp
Project 1A
Created by Daniel Berger on 2/03/19

Implementation of CourseMember
*/

#include "CourseMember.hpp"
#include <iostream>

CourseMember::CourseMember(num, name, surname){
  id_ = num;
  first_name_ = name;
  last_name_ = surname;
}

int CourseMember::getID(){
  return id_;
}

string CourseMember::getFirstName{
  return first_name_;
}

string CourseMember::getLastName{
  return last_name_;
}
