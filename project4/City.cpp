// Daniel Berger
// City implementation

#include <iostream>
#include <string>

#include "City.hpp"

City::City(std::string city_name){
   name = city_name;
   visited = false;
}

std::string City::getName(){
   return name;
}

void City::setAdjacentTo(City city_obj){
   adj.push_back(city_obj);
}

bool City::isAdjacentTo(City city_obj){
   for (int i = 0; i < adj.size(); i++){
      if (adj[i].getName() == city_obj.getName()){
         std::cout << this->getName() << " is adjacent to " << city_obj.getName() << std::endl;
         return true;
      }
   }
}

bool City::wasVisited(){
   return visited;
}
