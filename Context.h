#pragma once

#include "Strategy.h"

template<typename T>
class Context {
	Strategy<T>* strategy;

public:
	Context(Strategy<T> *strategy_ = nullptr) : strategy(strategy_){}

	~Context() {
		delete strategy;
	}

	void set_strategy(Strategy<T> *strategy_)
	{
		delete this->strategy;
		this->strategy = strategy_;
	}

	void doSearch(Graph<T> g) {
		this->strategy->search(g);
		
	}
};