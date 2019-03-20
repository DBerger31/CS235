/*
Created by Daniel Berger
Implementation File for polytest
NOT A CLASS
HELPER FUNCTIONS FOR CourseMember
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

#include "polytest.hpp"
#include "List.hpp"
#include "CourseMember.hpp"
#include "Student.hpp"
#include "TeachingAssistant.hpp"
#include "Instructor.hpp"


/**
@return a number randomly sampled from
 {4.0, 3.75, 3.5, 3.25, 3.0, 2.75, 2.5, 2.25, 2.0}
 */
double randGpa(){
   double gpa[9] = {4.0, 3.75, 3.5, 3.25, 3.0, 2.75, 2.5, 2.25, 2.0};
   return gpa[rand() % 9];
}

/**
@return a string randomly sampled from
 {"Computer Science", "Literature", "Music", "Philosophy", "Physics",
"Theatre", "Computational Biology", "Mathematics", "Geography",
"Linguistics"}
 */
std::string randMajor(){
   string maj[10] = {"Computer Science", "Literature", "Music", "Philosophy", "Physics",
   "Theatre", "Computational Biology", "Mathematics", "Geography",
   "Linguistics"};
   return maj[rand() % 10];
}

/**
@return a ta_role randomly sampled from
 {LAB_ASSISTANT, LECTURE_ASSISTANT,FULL_ASSISTANT}
 */

ta_role randRole(){
   ta_role role[3] = {LAB_ASSISTANT, LECTURE_ASSISTANT,FULL_ASSISTANT};
   return role[rand() % 3];

}

/*
instatntiates an object (student, ta, instruc) of id, first, last, title ,
and randomly genrates others not given.
adds a pointer to the list that points to this new object
*/

//randomly set hours_per_week_
int randHours(){
   int hours[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
   return hours[rand() % 16];
}


void addMemberToList(List<CourseMember*>& cm_list, int id, const std::string& first_name, const std::string& last_name, const std::string& title) {
   if (title == "Student"){
      Student* s_ptr = new Student(id, first_name, last_name); // dynamically allocates memory
      //select random gpa and major
      s_ptr->setGpa(randGpa());
      s_ptr->setMajor(randMajor());
      CourseMember* c_ptr = s_ptr; // creates a coursememeber ptr that point to student ptr
      cm_list.insert(cm_list.getLength(), c_ptr);
      s_ptr = nullptr; // gets rid of dangling ptr
   }
   else if (title == "Teaching Assistant"){
      TeachingAssistant* ta_ptr = new TeachingAssistant(id, first_name, last_name);
      //select random gpa and major etc
      ta_ptr->setGpa(randGpa());
      ta_ptr->setMajor(randMajor());
      ta_ptr->setHours(randHours());
      ta_ptr->setRole(randRole());
      CourseMember* c_ptr = ta_ptr; // creates a coursememeber ptr that point to ta ptr
      cm_list.insert(cm_list.getLength(), c_ptr);
      ta_ptr = nullptr;  // gets rid of dangling ptr
   }
   else if (title == "Instructor") {
      Instructor* i_ptr = new Instructor(id, first_name, last_name);
      //select random gpa and major
      i_ptr->setOffice("1000C");
      i_ptr->setContact("235Instructors@hunter.cuny.edu");
      CourseMember* c_ptr = i_ptr; // creates a coursememeber ptr that point to inst ptr
      cm_list.insert(cm_list.getLength(), c_ptr);
      i_ptr = nullptr; // gets rid of dangling ptr
   }
}

/*
cm_list is a list containg coursemember pointers?
input file is the name of the file we are importing
*/
void populateCmList(List<CourseMember*>& cm_list, std::string input_file) {
   ifstream fin;
   fin.open(input_file); // creates a file stream called fin
   if (fin.fail()){ // error handling if the file cannot open
      cerr << "File cannot be opened!";
      exit(1);
   }

   string id; // string because getline takes in a string
   string first;
   string last;
   string title;
   while(!(fin.eof())){ // while the file has not reached the end
      getline(fin, id,',');
      getline(fin, first, ',');
      getline(fin, last, ',');
      getline(fin, title, '\n');
      int id_ = atoi(id.c_str()); // converts to int

      if (!fin.eof()){ // gets rid of \n at the end of each line
         title.pop_back();
      }

      addMemberToList(cm_list, id_, first, last, title); // adds id, first, last, and title to list

   }
   fin.close(); // closes the file
}
