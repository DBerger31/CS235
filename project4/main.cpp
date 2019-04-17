// test

#include <iostream>
#include <string>
#include "City.hpp"
#include "RouteMap.hpp"

int main(){

   City a("Brooklyn");
   City b("Staten Island");
   City c("Manhatten");

   
   std::cout << a.getName() << std::endl;

   c.setAdjacentTo(a);
   c.setAdjacentTo(b);

   c.isAdjacentTo(a);
   c.isAdjacentTo(b);

   RouteMap poop;
   poop.readMap("test.csv");
   poop.printMap();

}
