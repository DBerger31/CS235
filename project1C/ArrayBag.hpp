//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
//  Modifed by Daniel Berger
//  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

/** Header file for an array-based implementation of the ADT bag.
@file ArrayBag.h */

#ifndef ARRAY_BAG_
#define ARRAY_BAG_

#include <vector>

template<class T>
class ArrayBag
{

public:
	/** default constructor**/
	ArrayBag();

	/**
	@return item_count_ : the current size of the bag
	**/
	int getCurrentSize() const;

	/**
	@return true if item_count_ == 0, false otherwise
	**/
	bool isEmpty() const;

	/**
	@return true if new_etry was successfully added to items_, false otherwise
	**/
	bool add(const T& new_entry);

	/**
	@return true if an_etry was successfully removed from items_, false otherwise
	**/
	bool remove(const T& an_entry);

	/**
	@post item_count_ == 0
	**/
	void clear();

	/**
	@return true if an_etry is found in items_, false otherwise
	**/
	bool contains(const T& an_entry) const;

	/**
	@return the number of times an_entry is found in items_
	**/
	int getFrequencyOf(const T& an_entry) const;

	/**
	@return a vector having the same cotntents as items_
	**/
	std::vector<T> toVector() const;

	/*
	@param a_bag is combined with the contents of this bag
	@return a new bag that has the contents of both this bag and a_bag
	*/
	ArrayBag<T> bagUnion(const ArrayBag<T>& a_bag) const;

	/*
	@param a_bag is combined with the contents of this bag
	@return a new bag that has the contents of both this bag and a_bag without any duplicates
	*/
	ArrayBag<T> bagIntersectionNoDuplicates(const ArrayBag<T>& a_bag) const;

	/*
	@param a_bag is subtracted from the contents of this bag
	@return a new bag that has the contents unique to either bag but not both
	*/
	ArrayBag<T> bagDifference (const ArrayBag<T>& a_bag) const;

	/*
	@param a_bag is intersected with the contents of this bag
	@return a new bag that contains the intersection of the contents of both bags
	*/
	//ArrayBag<T> bagIntersection (const ArrayBag<T>& a_bag) const;




private:
	static const int DEFAULT_CAPACITY = 200;  //max size of items_
	T items_[DEFAULT_CAPACITY];      // Array of bag items
	int item_count_;                 // Current count of bag items


	/**
	@param target to be found in items_
	@return either the index target in the array items_ or -1,
	if the array does not containthe target.
	**/
	int getIndexOf(const T& target) const;


}; // end ArrayBag

#include "ArrayBag.cpp"
#endif
