/*
Daniel Berger
BagTest Header
Instantiates an ArrayBag that contains CourseMembers
*/

#ifndef BagTest_hpp
#define BagTest_hpp

#include "CourseMember.hpp"
#include "ArrayBag.hpp"

class BagTest {
public:
   ArrayBag<CourseMember> testCourseMemberBag(); // creates a bag
   void displayCourseMemberBag(const ArrayBag<CourseMember>& a_bag); // displays contents of bag

private:
   ArrayBag<CourseMember> bag_;
};

#endif
