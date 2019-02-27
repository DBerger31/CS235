// Simple main

#include <iostream>
#include <string>
#include <vector>
#include "ArrayBag.hpp"
#include "BagTest.hpp"
#include "CourseMember.hpp"


int main(){

/*
   ArrayBag<int> bag1;
   ArrayBag<int> bag2;
   ArrayBag<int> bag3;


   bag1.add(1);
   bag1.add(2);
   bag1.add(3);
   bag1.add(3);
   bag1.add(4);
   bag1.add(4);
   bag2.add(5);
   bag2.add(5);
   bag2.add(5);
   bag2.add(1);
   bag2.add(1);
   bag2.add(7);

   bag3 = bag1.bagDifference(bag2);
   std::vector<int> bag3v = bag3.toVector();
   for (int i = 0; i < bag3.getCurrentSize(); i++){
       std::cout << bag3v[i] << std::endl;
    }
*/

ArrayBag<CourseMember> bag;
BagTest a;
bag = a.testCourseMemberBag();
a.displayCourseMemberBag(bag);

return 0;
}
