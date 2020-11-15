//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#include "HotNode.h"

#define STUB_PLEASE_REPLACE(x) (x)

// Insert code if desired

//Constructors

HotNode::HotNode(const HotNode& rhs)
{
	this->key = rhs.key;
}

HotNode& HotNode::operator=(const HotNode& rhs)
{
	this->key = rhs.key;

	return *this;
}

//assignment operator that takes type NODE - for conversion
HotNode& HotNode::operator=(const Node& rhs)
{
	this->key = rhs.key;

	return *this;
}


// ---  End of File ---------------
