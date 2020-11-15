//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------- 

#ifndef HOTCOLD_H
#define HOTCOLD_H

#include "ColdNode.h"
#include "HotNode.h"

class HotCold
{
public:
	HotCold() = delete;
	HotCold(const HotCold &) = delete;
	HotCold & operator = (const HotCold &) = delete;

	//TODO: implement specialized constructor & destructor
	HotCold( const Bloated * const pBloated );
	~HotCold();

	//TODO: implement FindKey
	bool FindKey(int key, ColdNode *&pFoundColdNode, HotNode *&pFoundHotNode) const;

	HotNode *GetHotHead() const;

private:
	unsigned int Size; //number of nodes???
	HotNode		*pHotHead = nullptr;
	ColdNode	*pColdHead = nullptr;
};

#endif

// ---  End of File ---------------

