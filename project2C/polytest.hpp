/*
Created by Daniel Berger
Header File for polytest
NOT A CLASS
HELPER FUNCTIONS FOR CourseMember
*/

/**
@param cm_list the list to be populated with pointers to CourseMember
@param input_file the file containing data used to generate CourseMemberderived objects to add to cm_list
@post reads parameters from input_file to call addMemberToList()
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "CourseMember.hpp"
#include "Instructor.hpp"
#include "TeachingAssistant.hpp"
#include "Student.hpp"
#include "List.hpp"
#include "Node.hpp"

void populateCmList(List<CourseMember*>& cm_list, std::string input_file);

/**
@post instantiates a new object - Student, TeachingAssistant or Instructor -
as indicated by the title parameter, randomly generate relevant data not
provided by parameters (e.g. major_, gpa_ etc.) and append a pointer to
cm_list that points to the newly instantiated object
 */
void addMemberToList(List<CourseMember*>& cm_list, int id, const std::string& first_name, const std::string& last_name, const std::string& title);

double randGpa(); // randomly sets gpa

std::string randMajor(); // randomly select major

//ta_role randRole(); // randomly pick ta role

int randHours(); // random hours
