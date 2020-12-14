#pragma once 



#include "Graph.h"


template<typename T>
class Strategy {
public:
	virtual void search(Graph<T> g) {};

};
