/*
@file
Project 1B
Created by Daniel Berger on 2/12/19

Implementation of Student class
Student class consists of private vars major and gpa
and functions that set them
and a functon that returns the gpa
*/
#include "CourseMember.hpp"
#include "Student.hpp"
#include <iostream>
#include <string>

// constructor for student that gives the student an id and fullname
Student::Student(int id, std::string first, std:: string last){
   id_ = id;
   first_name_ = first;
   last_name_ = last;
}

// returns the students major
std::string Student::getMajor() const {
   return major_;
}

// returns the students gpa
double Student::getGpa() const {
   return gpa_;

// sets the students major
void Student::setMajor(const std::string major) {
   major_ = major;
}

// sets the students gpa
void Student::setGpa(const std::string gpa) {
   gpa_ = gpa;
}
