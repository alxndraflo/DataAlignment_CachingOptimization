//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#ifndef COLD_NODE_H
#define COLD_NODE_H

#include "Node.h"

class Node;
class HotNode;

class ColdNode
{
public:
	// Constructors
	ColdNode() = default;
	ColdNode(const ColdNode& rhs);
	ColdNode& operator=(const ColdNode& rhs);
	~ColdNode() = default;

	ColdNode& operator=(const Node& rhs); // assign operator that takes NODE - conversion

	// Data
	HotNode	*pHot = nullptr;
	float	x = 0.0f;
	float	y = 0.0f;
	float	z = 0.0f;
	Vect	A;
	Vect	B;
	Vect	C;
	Matrix	MA;
	Matrix	MB;
	Matrix	MC;
	Matrix	MD;
	char	name[Node::NAME_SIZE];
};


#endif

// ---  End of File ---------------

