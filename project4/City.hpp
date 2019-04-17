// Daniel Berger
// City Header

#include <string>
#include <vector>


#ifndef City_HPP_
#define City_HPP_


class City
{
public:
   City(std::string city_name); // constructor
   bool wasVisited(); // returns true if the city was visited
   //void markVisited(); // marks city as visited
   bool isAdjacentTo(City city_obj); // returns true if adjacent to the passed city arg
   //void addCity(const City city_name)
   std::string getName(); // returns city name
   void setAdjacentTo(City city_obj); // sets the city adjacent to another city
private:
   std::string name;
   bool visited; // used to mark if the city was visited
   std::vector<City> adj;

};

#endif
