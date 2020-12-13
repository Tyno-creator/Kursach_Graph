#ifndef GRAPH_CPP
#define GRAPH_CPP

#include "Graph.h"


template <typename T>
Graph<T>::Graph(int j)
{
	size = j;
	arrayNode = new Node<T>[size];
	for(int i = 0; i < size; i++)
		arrayNode[i].index = i;
	
	
	matrix = new int*[size];
	for(int i = 0; i < size; i++)
		matrix[i] = new int[size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix[i][j] = 0;

}

template <typename T>
Graph<T>::~Graph()
{
	
}

template<typename T>
void Graph<T>::deleteGraph() {
	for (int i = 0; i < size; i++)
		delete[] matrix[i];
	delete[] arrayNode;
}

template<typename T>
void Graph<T>::enterNodes() {
	cout << "Node: " << arrayNode[0].index << endl;
	while (true) {
		cout << "Enter value: ";
		cin >> arrayNode[0].val;
		if (!cin) {
			cout << "Input Error!" << endl;
			cin.clear();
			while (cin.get() != '\n');
		}
		else
			break;
	}
	for (int i = 1; i < size; i++) {
		cout << "Node: " << arrayNode[i].index << endl;
		while (true) {
			cout << "Enter value: ";
			cin >> arrayNode[i].val;
			if (!cin) {
				cout << "Input Error!" << endl;
				cin.clear();
				while (cin.get() != '\n');
			}
			else
				break;
		}
		while (true) {
			int in;
			while (true) {
				printf("Enter index node(1 to %d; size = %d): ", i, size);
				cin >> in;
				if (!cin)
				{
					cout << "Input Error!" << endl;
					cin.clear();
					while (cin.get() != '\n');
				}
				else if((in <= 0 || in >= i) && in != i){
					cout << "Input Error!" << endl;
				}
				else
					break;
			}
			matrix[i][in-1] = 1;
			matrix[in-1][i] = 1;
			while (true) {
				printf("Enter index node(1 to %d; size = %d; if you want exit enter 0): ", i, size);
				/*cout << "Enter index node(1 to " + i;
				cout << "; size = ";
				cout << size + "; if you want exit enter 0): ";*/
				cin >> in;
				if (!cin)
				{
					cout << "Input Error!" << endl;
					cin.clear();
					while (cin.get() != '\n');
				}
				else if (in == 0) {
					break;
				}
				else if ((in < 0 || in >= i) && in != i) {
					cout << "Input Error!" << endl;
				}
				else {
					matrix[i][in - 1] = 1;
					matrix[in - 1][i] = 1;
					
				}
			}
			break;
		}
	}
}

#endif