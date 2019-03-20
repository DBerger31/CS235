
#include "Node.hpp"
#include "List.hpp"

using namespace std;

#include <iostream>
#include <string>

int main(){

   List<int> a;
   a.insert(0,3);
   a.insert(1,4);
   a.insert(2,5);
   a.insert(3,6);
   a.insert(4,3);
   a.insert(5,4);
   a.insert(6,5);
   a.insert(7,9);
   a.insert(8,5);
   a.insert(9,4);
   a.insert(10,3);
   a.insert(11,2);
   a.insert(12,5);
   a.insert(13,7);
   a.insert(14,4);



   List<int> b = a.scanSublist(9);
   b.traverse();
}
