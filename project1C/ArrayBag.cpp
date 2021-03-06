//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
//  Modifed by Daniel Berger
//  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

/** Implementation file for the class ArrayBag.
 @file ArrayBag.cpp */

#include "ArrayBag.hpp"
#include <cstddef>

/** default constructor**/
template<class T>
ArrayBag<T>::ArrayBag(): item_count_(0)
{
}  // end default constructor


/**
 @return item_count_ : the current size of the bag
 **/
template<class T>
int ArrayBag<T>::getCurrentSize() const
{
	return item_count_;
}  // end getCurrentSize


/**
 @return true if item_count_ == 0, false otherwise
 **/
template<class T>
bool ArrayBag<T>::isEmpty() const
{
	return item_count_ == 0;
}  // end isEmpty


/**
 @return true if new_etry was successfully added to items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::add(const T& new_entry)
{
	bool has_room = (item_count_ < DEFAULT_CAPACITY);
	if (has_room)
	{
		items_[item_count_] = new_entry;
		item_count_++;
	}  // end if

	return has_room;
}  // end add


/**
 @return true if an_etry was successfully removed from items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::remove(const T& an_entry)
{
   int found_index = getIndexOf(an_entry);
	bool can_remove = !isEmpty() && (found_index > -1);
	if (can_remove)
	{
		item_count_--;
		items_[found_index] = items_[item_count_];
	}  // end if

	return can_remove;
}  // end remove


/**
 @post item_count_ == 0
 **/
template<class T>
void ArrayBag<T>::clear()
{
	item_count_ = 0;
}  // end clear


/**
 @return the number of times an_entry is found in items_
 **/
template<class T>
int ArrayBag<T>::getFrequencyOf(const T& an_entry) const
{
   int frequency = 0;
   int cun_index = 0;       // Current array index
   while (cun_index < item_count_)
   {
      if (items_[cun_index] == an_entry)
      {
         frequency++;
      }  // end if

      cun_index++;          // Increment to next entry
   }  // end while

   return frequency;
}  // end getFrequencyOf


/**
 @return true if an_entry is found in items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::contains(const T& an_entry) const
{
	return getIndexOf(an_entry) > -1;
}  // end contains


/**
 @return a vector having the same cotntents as items_
 **/
template<class T>
std::vector<T> ArrayBag<T>::toVector() const
{
   std::vector<T> bag_contents;
	for (int i = 0; i < item_count_; i++)
		bag_contents.push_back(items_[i]);

   return bag_contents;
}  // end toVector



// PRIVATE

/**
 @param target to be found in items_
 @return either the index target in the array items_ or -1,
 if the array does not containthe target.
 **/
template<class T>
int ArrayBag<T>::getIndexOf(const T& target) const
{
	bool found = false;
   int result = -1;
   int search_index = 0;

   // If the bag is empty, item_count_ is zero, so loop is skipped
   while (!found && (search_index < item_count_))
   {
      if (items_[search_index] == target)
      {
         found = true;
         result = search_index;
      }
      else
      {
         search_index++;
      }  // end if
   }  // end while

   return result;
}  // end getIndexOf

/*
@param a_bag is combined with the contents of this bag
@return a new bag that has the contents of both this bag and a_bag
*/
template<class T>
ArrayBag<T> ArrayBag<T>::bagUnion(const ArrayBag<T>& a_bag) const {
	ArrayBag<T> unionbag; // creates a new unionedbag
	for (int i = 0; i < getCurrentSize(); i++){ // adds all the items from the orginal bag to the unioned bag
		unionbag.add(items_[i]);
	}
	if ((unionbag.getCurrentSize() + a_bag.getCurrentSize()) < DEFAULT_CAPACITY) { // if there is space in the unioned bag
		for (int i = 0; i < a_bag.getCurrentSize(); i++){ // add all the items from argument bag to unioned bag
			unionbag.add(a_bag.items_[i]);
		}
	}
	return unionbag; // returns the new combined bag
}

/*
this bag is intersected with a_bag
returns a bag with values shared by both bags no duplicates
*/
template<class T>
ArrayBag<T> ArrayBag<T>::bagIntersectionNoDuplicates(const ArrayBag<T>& a_bag) const {

	ArrayBag<T> interbag; //creats interbag

	for (int i = 0; i < getCurrentSize(); i++){ // if the item is not in the bag already and its in a_bag add it
		if ((interbag.contains(items_[i]) == false) && a_bag.contains(items_[i])){
			interbag.add(items_[i]);
		}
	}
	return interbag;

}

/*
returns a bag that has values unqiue to each bag
*/
template<class T>
ArrayBag<T> ArrayBag<T>::bagDifference (const ArrayBag<T>& a_bag) const {
	ArrayBag<T> bag1; // creates bag 1 with no duplicates
	ArrayBag<T> bag2; // creates bag 1 with no duplicates
	ArrayBag<T> tempbag;
	ArrayBag<T> diffbag; // creates a combined bag with no duplicates

// if bag 1 doesnt already have the item and that item is not in a_bag than add it otherwise add it to the temp bag
	for (int i = 0; i < getCurrentSize(); i++){
		if ((bag1.contains(items_[i]) == false) && a_bag.contains(items_[i]) == false){
			bag1.add(items_[i]);
		}
		else { tempbag.add(items_[i]); }
	}
// if bag 2 doest already have the item , bag 1 doesnt have the item and temp bag doesnt then add it
	for (int i = 0; i < getCurrentSize(); i++){
		if ( (bag2.contains(a_bag.items_[i]) == false) && (bag1.contains(a_bag.items_[i]) == false) && (tempbag.contains(a_bag.items_[i])) == false ){
			bag2.add(a_bag.items_[i]);
		}
	}


	diffbag = bag1.bagUnion(bag2);
	return diffbag;

}
