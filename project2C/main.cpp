// test function
//

#include <iostream>

#include "CourseMember.hpp"
#include "Instructor.hpp"
#include "TeachingAssistant.hpp"
#include "List.hpp"
#include "polytest.hpp"
#include "Node.hpp"


using namespace std;

int main(){

   int x;
   List<CourseMember*> cm_list;
   populateCmList(cm_list, "roster.csv");
   cout << "enter a val for x " << endl;
   cin >> x;
   cm_list.getItem(x)->displayMember();
}
