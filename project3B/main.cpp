#include "Node.hpp"
#include "LinkedList.hpp"

using namespace std;

#include <iostream>
#include <string>

int main() {

   LinkedList<int> a;
   a.insert(1,5);
   a.insert(2,2);
   a.insert(3,9);
   a.insert(4,1);
   a.insert(5,3);
   a.insert(6,8);

   a.invert();
   for (int i = 1; i < a.getLength() + 1; i++){
      cout << a.getEntry(i) << " ";
   }
}
