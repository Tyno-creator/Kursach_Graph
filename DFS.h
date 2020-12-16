#pragma once

#include <stack>
#include "Strategy.h"

template<typename T>
class DFS : public Strategy<T>
{
public:
	DFS() {};
	~DFS() {};

	void search(Graph<T> g);
};


#include "DFS.cpp"
