// Daniel Berger
// RouteMap implementation file

#include <vector>
#include <stack>
#include <iostream>
#include <string>
#include <fstream>

#include "RouteMap.hpp"

RouteMap::RouteMap(){}

bool RouteMap::readMap(std:: string input_file_name){

   std::ifstream fin;
   fin.open(input_file_name);
   if (fin.fail()){
      std::cout << "File cannot be opened" << std::endl;
      return false;
   }

   std::string name; // used to store city objects from csv file

   while(!(fin.eof())){
      std::getline(fin, name, ',');
      City a(name);
      map.push_back(a);
   }

   return true;

}

void RouteMap::printMap(){
   for (int i = 0; i < map.size(); i++){
      std::cout << map[i].getName() << std::endl;
   }
}

/**
City* RouteMap::getCity(size_t position){

}

bool RouteMap::isRoute(City* origin, City* destination){

}
**/
