//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#ifndef REWORK_DATA_H
#define REWORK_DATA_H

struct DataA // 16 bytes total
{
	double r;
	char a;
	char pad0;
	char pad1;
	char pad2;
	char b;
	char pad3;
	char pad4;
	char pad5;
};

struct DataB // 24 bytes total
{
	DataA da; //16
	int i; //4
	char a; //1
	char pad0;
	char b; //1
	char pad3;
};

struct DataC // 16 bytes total
{
	double r; //8
	int i; //4
	char a; //1
	char pad0;
	bool f; //1
	char pad1;
};

struct DataD // 16 bytes total
{
	double r; //8
	int i; //4
	char a; //1
	char pad0;
	char b; //1
	char pad1;
};

struct DataE // 32 bytes total
{
	double r; //8
	int x; //4
	int *p; //4
	char name[12]; //12
	char a; //1
	char pad0;
	char c; //1
	char pad1;
};

struct Vect // 20 bytes total
{
	float vx; //4
	float vy; //4
	float vz; //4
	float vw; //4
	char a; //1
	char pad0;
	char b; //1
	char pad1;
};

struct DataF // 32 bytes total
{
	Vect v; //20
	int i; //4
	int j; //4
	char b; //1
	char pad0;
	char c; //1
	char pad1;
};


#endif

// ---  End of File ---------------
