//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#ifndef HOT_NODE_H
#define HOT_NODE_H

#include "Node.h"

class Node;
class ColdNode;

class HotNode
{
public:
	//Constructors
	HotNode() = default;
	HotNode(const HotNode& rhs);
	HotNode& operator=(const HotNode& rhs);
	~HotNode() = default;

	HotNode& operator=(const Node& rhs);  //ctor to take type NODE - useful for conversion??

	//TODO: Specialized constructor - DO I NEED?
	//HotNode(int keyIn);


	HotNode		*pNext = nullptr;
	HotNode		*pPrev = nullptr;
	int			key = 0;
	ColdNode	*pCold = nullptr;
};

#endif

// ---  End of File ---------------
