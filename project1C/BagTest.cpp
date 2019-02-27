
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "CourseMember.hpp"
#include "ArrayBag.hpp"
#include "BagTest.hpp"

using namespace std;

/*
input a csv file as follows ; id, first name , last name, title
function asks the user for an input file name
extracts all the data required and creates a CourseMember object
then adds it to the bag
*/
ArrayBag<CourseMember> BagTest::testCourseMemberBag(){
   cout << "Enter a file name: " << endl;
   string fh;
   cin >> fh; // asks for user input
   ifstream fin(fh); // creates a file stream called fin
   if (fin.fail()){ // error handling if the file cannot open
      cerr << "File cannot be opened!";
      exit(1);
   }

   string id; // string because getline takes in a string
   string first;
   string last;
   string title;
   ArrayBag<CourseMember> bag; // creates a bag object of type CourseMember
   string dummy; // dummy string to throw title into
   while(!(fin.eof())){ // while the file has not reached the end
      getline(fin, id,',');
      getline(fin, first, ',');
      getline(fin, last, ',');
      getline(fin, dummy, '\n');
      CourseMember a(atoi(id.c_str()), first, last); // creates a course member object ; also converts id into and int
      dummy = title; // stores title
      bag.add(a); // adds coursemember object to the bag
   }

   fin.close(); // closes the file

   return bag;
}

//displays the contents of the bag
void BagTest::displayCourseMemberBag(const ArrayBag<CourseMember>& a_bag){
   vector<CourseMember> bagv = a_bag.toVector(); // converts bag into vector
   for (int i = 0; i < a_bag.getCurrentSize(); i++){ // loops to print values
       cout << bagv[i].getID() << "  " << bagv[i].getFirstName() << "  " << bagv[i].getLastName() << endl;
   }
}
