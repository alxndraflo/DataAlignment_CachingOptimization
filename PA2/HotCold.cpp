//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------- 

#include "Framework.h"

// Users
#include "Bloated.h"
#include "Node.h"
#include "hotcold.h"

#define STUB_PLEASE_REPLACE(x) (x)

// Constructors

HotCold::HotCold(const Bloated * const pBloated)
{
	this->Size = pBloated->GetSize(); // Number of nodes in list

	// Create temp for # of nodes
	unsigned int numNodes = this->Size;

	// Create memory pool for hot nodes
	HotNode* hotBuffer = new HotNode[numNodes];

	// Create memory pool for cold nodes
	ColdNode* coldBuffer = new ColdNode[numNodes];

	// Set hot and cold head ptrs to start of respective buffers
	this->pHotHead = hotBuffer;
	this->pColdHead = coldBuffer;

	//Create pointers to last node of hot and cold nodes
	HotNode* hotLastNode = hotBuffer + numNodes - 1;
	//hotLastNode->pNext = nullptr;
	//ColdNode* coldLastNode = coldBuffer + numNodes - 1;

	// Create temp variables to iterate through hot and cold lists
	HotNode* pHotIndex = this->pHotHead;
	ColdNode* pColdIndex = this->pColdHead;

	// Get bloated list head 
	Node* bloatedListIndex = pBloated->GetListHead();

	// Convert bloated to Hot/Cold data structure
	while (bloatedListIndex != nullptr)
	{
		//Create Hot Node
		*pHotIndex = *bloatedListIndex;
		//placement_new((void*)pHotIndex, HotNode*, bloatedListIndex);

		//Fix hot node ptrs
		if (pHotIndex == this->pHotHead) //if head
		{
			pHotIndex->pPrev = nullptr;
			pHotIndex->pNext = pHotIndex + 1;
		}
		else if (pHotIndex == hotLastNode) //if last node
		{
			pHotIndex->pNext = nullptr;
			pHotIndex->pPrev = pHotIndex - 1;
		}
		else
		{
			pHotIndex->pNext = pHotIndex + 1;
			pHotIndex->pPrev = pHotIndex - 1;
		}

		//Set pointer to cold node
		pHotIndex->pCold = pColdIndex;

		//Create Cold Node
		*pColdIndex = *bloatedListIndex;
		//placement_new((void*)pColdIndex, const ColdNode, *bloatedListIndex);

		//Set pointer to hot node from cold node
		pColdIndex->pHot = pHotIndex;

		//Increment to next node position in buffer
		pHotIndex++;
		pColdIndex++;

		//Go to next node in bloated list
		bloatedListIndex = bloatedListIndex->pNext;
	}
}

HotCold::~HotCold()
{
	delete[] this->pHotHead;
	delete[] this->pColdHead;
}

//----------------------------------------------------------------------------------
// Find Key using linked lists (pointers only) 
//    Hint: use ->pNext
//    YOU MUST - iterate through the nodes in a linked list fashion or 0 credit
//
// Return true if you find the node
// Return the pointer in the argument list to the HotNode and ColdNode (if found)
//----------------------------------------------------------------------------------
bool HotCold::FindKey(int key, ColdNode *&pFoundColdNode, HotNode *&pFoundHotNode) const
{
	HotNode* current = this->GetHotHead();
	//bool foundFlag = false;

	while (current != nullptr)
	{
		if (current->key == key)
		{
			pFoundHotNode = current; //set pFoundHotNode to value of current node
			pFoundColdNode = current->pCold; //set pFoundColdNode to current.pCold
			return true;
			//foundFlag = true;
			//break;
		}

		current = current->pNext;
	}

	//return foundFlag;
	return false;
}

HotNode *HotCold::GetHotHead() const
{
	return this->pHotHead;
}

// ---  End of File ---------------
