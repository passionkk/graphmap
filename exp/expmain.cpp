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

int main()
{

	Digraph<int, int> loli;
	std::cout << loli.vertexCount() << std::endl;
	std::cout << loli.edgeCount() << std::endl;
	loli.addVertex(3, 2);
	std::cout << loli.edgeCount() << std::endl;
	std::cout << loli.vertexCount() << std::endl;
	loli.addEdge(1, 2, 6);
	loli.addEdge(3, 4, 8);
	std::cout << loli.edgeCount() << std::endl;
	std::cout << loli.vertexInfo(3) << std::endl;
	loli.removeEdge(1, 2);
	loli.removeEdge(1, 2);
	loli.removeEdge(3, 4);
	std::cout << loli.vertexCount() << std::endl;
	std::cout << loli.edgeCount() << std::endl;
    return 0;
}

