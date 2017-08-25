// main.cpp
//
// ICS 46 Spring 2017
// Project #4: Rock and Roll Stops the Traffic
//
// This is the program's main() function, which is the entry point for your
// console user interface.

#include "Digraph.hpp"
#include "InputReader.hpp"
#include "RoadMap.hpp"
#include "RoadMapReader.hpp"
#include "RoadMapWriter.hpp"
#include "RoadSegment.hpp"
#include "Trip.hpp"
#include "TripMetric.hpp"
#include "TripReader.hpp"
#include <iostream>


int main()
{
	InputReader lo = InputReader(std::cin);

	RoadMapReader rlo;
	RoadMap lomap = rlo.readRoadMap(lo);

	TripReader tlo;
	std::vector<Trip> tv = tlo.readTrips(lo);

    return 0;
}

