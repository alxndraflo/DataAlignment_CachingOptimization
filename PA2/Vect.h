//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#ifndef VECT_H
#define VECT_H

struct Vect
{
	//Constructor
	Vect() = default;
	
	Vect(const Vect& rhs)
	{
		this->x = rhs.x;
		this->y = rhs.y;
		this->z = rhs.z;
	}
	
	Vect& operator=(const Vect& rhs)
	{
		this->x = rhs.x;
		this->y = rhs.y;
		this->z = rhs.z;

		return *this;
	}

	//Data
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};

#endif

// ---  End of File ---------------
