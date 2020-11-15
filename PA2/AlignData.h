//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#ifndef ALIGN_DATA_H
#define ALIGN_DATA_H

// Add default constructor to each structure
// Initialize all variable to 0

struct A // 8 bytes total
{
	A();
	int  a0;
	char a1;
	char pad0;
	char pad1;
	char pad2;
};

struct B // 12 bytes
{
	B();
	float b0;
	float b1;
	float b2;
};

struct C // 16 bytes
{
	C();
	double c0;
	char   c1;
	char pad[7];
};

struct D
{
	D();
	A      a; //8
	double d; //8
	B      b; //12
	char pad[4];
	C      c; //16
};

#endif

// ---  End of File ---------------
