#pragma once

#include "Node.h" 


template <typename T>
class Graph
{
public:
	Graph(int j);
	~Graph();
	void deleteGraph();
	void enterNodes();

	int** matrix;
	int size;
	Node<T>* arrayNode;
};

#include "Graph.cpp"