// Daniel Berger
// RouteMap Header

#include <vector>
#include <stack>
#include <iostream>
#include <string>
#include <fstream>

#include "City.hpp"

#ifndef RouteMap_HPP_
#define RouteMap_HPP_


class RouteMap
{
public:
   RouteMap();
   /**
   reads a csv file, first line is a comma seperated list of city names
   and the remainder is a comma seperated list of city-pairs indicating which
   cities are adjacent
   **/
   bool readMap(std::string input_file_name);
   /**
   returns a pointer to the city found at the position where
   0 <= position <= n-1 and n is the number of cities
   cites are also stored in the same order in which they appear in the input file
   **/
   //City* getCity(size_t position);
   /**
   returns true if there is a route from the origin to the dest, false otherwise
   if a route is found it will print it to standard output in the form
   ORIGIN -> ... -> DESTINATION
   **/
   //bool isRoute(City* origin, City* destination);

   void printMap(); // prints all the cities
private:
   std::vector<City> map;
   std::stack<City> route;
};

#endif
