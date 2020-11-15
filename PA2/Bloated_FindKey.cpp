//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------- 

// user headers
#include "Bloated.h"
#include "Node.h"

#define STUB_PLEASE_REPLACE(x) (x)

//----------------------------------------------------------------------------------
// Find Key using linked lists (pointers only) 
//    Hint: use ->pNext
//    YOU MUST - iterate through the nodes in a linked list fashion or 0 credit
//               starting from the head until you find it
//
// Return true if you find the node
// Return the pointer in the argument list to the node (if found)
//----------------------------------------------------------------------------------

bool Bloated::FindKey(int key, Node*&foundNode) const
{
	Node* current = GetListHead();
	bool foundFlag = false;

	while (current != nullptr)
	{
		if (current->key == key)
		{
			foundNode = current; //set foundNode to value of current node
			foundFlag = true;
			break;
		}

		current = current->pNext;
	}

	return foundFlag;
}

// End of File
