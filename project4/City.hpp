// Daniel Berger
// City Header

#include <string>
#include <vector>

#ifndef City_
#define City_


class City
{
public:
   City(std::string city_name); // constructor
   bool wasVisited(); // returns true if the city was visited
   bool isAdjacent(std::string city_name); // returns true if adjacent to the passed city arg
   //void addCity(const City city_name)
   std::string getName(); // returns city name
   void setAdjacent(City city_name); // sets the city adjacent to another city
private:
   std::string name;
   
   //std::vector<City> map;

};

#endif
