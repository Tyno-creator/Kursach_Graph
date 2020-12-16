#pragma once

#include <queue>
#include "Strategy.h"

template<typename T>
class BFS : public Strategy<T>
{
public:
	BFS() {};
	~BFS() {};

	void search(Graph<T> g);
};

#include "BFS.cpp"
