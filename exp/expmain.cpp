// expmain.cpp
//
// ICS 46 Spring 2017
// Project #4: Rock and Roll Stops the Traffic
//
// Do whatever you'd like here.  This is intended to allow you to experiment
// with your code, outside of the context of the broader program or Google
// Test.

#include "Digraph.hpp"
#include <iostream>
#include "Digraph.hpp"
#include "InputReader.hpp"
#include "RoadMap.hpp"
#include "RoadMapReader.hpp"
#include "RoadMapWriter.hpp"
#include "RoadSegment.hpp"
#include "Trip.hpp"
#include "TripMetric.hpp"
#include "TripReader.hpp"

int main()
{



	Digraph<int, int> loli;
	std::cout << loli.vertexCount() << std::endl;
	std::cout << loli.edgeCount() << std::endl;
	loli.addVertex(1, 2);
	loli.addVertex(2, 2);
	loli.addVertex(2, 2);
	loli.addVertex(3, 2);
	std::cout << loli.edgeCount() << std::endl;
	std::cout << loli.vertexCount() << std::endl;
	loli.addEdge(1, 2, 6);
	loli.addEdge(1, 3, 8);
	loli.addEdge(2, 1, 8);
	loli.addEdge(2, 1, 8);
	loli.addEdge(2, 2, 8);
	//loli.addEdge(2, 3, 8);
	//loli.addEdge(3, 4, 8);
	std::cout << loli.edgeCount() << std::endl;
	std::cout << loli.edgeInfo(1, 2) << std::endl;
	std::cout << loli.edgeInfo(1, 3) << std::endl;
	std::cout << loli.edgeInfo(2, 2) << std::endl;
	std::cout << loli.vertexCount() << std::endl;

	std::cout << loli.edgeCount() << std::endl;
	std::cout << loli.isStronglyConnected() << std::endl;
	std::cout << "lolicon" << std::endl;
    return 0;
}

