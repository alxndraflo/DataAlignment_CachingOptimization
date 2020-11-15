//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#include "Node.h"
#include "ColdNode.h"

// Insert code

//Constructors

ColdNode::ColdNode(const ColdNode& rhs) // copy constructor
{
	this->pHot = rhs.pHot;
	this->x = rhs.x;
	this->y = rhs.y;
	this->z = rhs.z;
	this->A = rhs.A;
	this->B = rhs.B;
	this->C = rhs.C;
	this->MA = rhs.MA;
	this->MB = rhs.MB;
	this->MC = rhs.MC;
	this->MD = rhs.MD;

	//deep copy name
	//TODO: Do I need to do this??
	//size_t length = strlen(rhs.name) + 1;
	strcpy_s(this->name, Node::NAME_SIZE, rhs.name);
}

ColdNode& ColdNode::operator=(const ColdNode& rhs) // assignment operator
{
	this->pHot = rhs.pHot;
	this->x = rhs.x;
	this->y = rhs.y;
	this->z = rhs.z;
	this->A = rhs.A;
	this->B = rhs.B;
	this->C = rhs.C;
	this->MA = rhs.MA;
	this->MB = rhs.MB;
	this->MC = rhs.MC;
	this->MD = rhs.MD;

	//deep copy name
	//TODO: Do I need to do this??
	//size_t length = strlen(rhs.name) + 1;
	strcpy_s(this->name, Node::NAME_SIZE, rhs.name);

	return *this;
}

//assignment operator that copies in type NODE - Is this right??? ***
ColdNode& ColdNode::operator=(const Node& rhs)
{
	this->x = rhs.x;
	this->y = rhs.y;
	this->z = rhs.z;

	//Initialize vectors
	this->A = rhs.A;
	this->B = rhs.B;
	this->C = rhs.C;

	//Initialize matrices
	this->MA = rhs.MA;
	this->MB = rhs.MB;
	this->MC = rhs.MC;
	this->MD = rhs.MD;

	//size_t length = strlen(rhs.name) + 1;
	strcpy_s(this->name, Node::NAME_SIZE, rhs.name);

	return *this;
}

// ---  End of File ---------------


