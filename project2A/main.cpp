// Simple main

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "LinkedBag.hpp"
#include "Node.hpp"


int main(){

   //Node<int>* head_ptr_ = nullptr;
   LinkedBag<int> bag1;  // why do I pass without () ??
   LinkedBag<int> bag2;

   bag1.add(7);
   bag1.add(9);
   bag1.add(5);
   bag1.add(9);
   bag1.add(8);
   bag1.add(0);
   bag1.add(8);
   bag1.add(1);
   bag1.add(0);
   bag1.add(4);
   bag1.add(8);
   bag1.add(8);
   bag1.add(6);
   bag1.add(5);
   bag1.add(6);
   bag1.add(3);
   bag1.add(6);
   bag1.add(9);
   bag1.add(3);
   bag1.add(0);

   /*
   cout << "BAG UNION TEST" << endl;
   LinkedBag<int> bag3(bag1.bagUnion(bag2)); //creates a union of the bags
   vector<int> bag3v = bag3.toVector();
   for (int i = 0; i < bag3.getCurrentSize(); i++){
       cout << bag3v[i] << endl;
   }*/

   cout << "BAG INTER NO DUPS TEST" << endl;

   LinkedBag<int> bag3(bag1.bagIntersectionNoDuplicates(bag2)); //creates a union of the bags
   vector<int> bag3v = bag3.toVector();
   for (int i = 0; i < bag3.getCurrentSize(); i++){
       cout << bag3v[i] << endl;
   }


   //LinkedBag<int> bag3(bag1.bagUnion(bag2)); //creates a union of the bags
   //LinkedBag<int> bag3(bag1.bagDifference(bag2)); // creates intersection
   bag1.addToEnd(5);
   /*vector<int> bag1v = bag1.toVector();
   for (int i = 0; i < bag1.getCurrentSize(); i++){
       cout << bag1v[i] << endl;
    }*/


return 0;
}

/* FOR DIFF BAG JUST IN CASE
if (diffbag.contains(temp_ptr->getItem()) && a_bag.contains(temp_ptr->getItem())){
   temp_ptr = temp_ptr->getNext();
}
else {
   diffbag.add(temp_ptr->getItem());
   temp_ptr = temp_ptr->getNext();
}



if (diffbag.contains(a_temp_ptr->getItem()) && contains(a_temp_ptr->getItem())){
	a_temp_ptr = a_temp_ptr->getNext();
	cout << "NOPE" << endl;
}
else {
	diffbag.add(a_temp_ptr->getItem());
	cout << "ADDED" << a_temp_ptr->getItem() << endl;
	temp_ptr = a_temp_ptr->getNext();
}*/
