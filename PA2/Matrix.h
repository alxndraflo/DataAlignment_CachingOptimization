//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#ifndef MATRIX_H
#define MATRIX_H

#include "Node.h"

class Node;

struct Matrix
{
	//Constructor
	Matrix() = default;
	~Matrix() = default;

	Matrix(const Matrix& rhs)
	{
		this->m00 = rhs.m00;
		this->m01 = rhs.m01;
		this->m02 = rhs.m02;
		this->m03 = rhs.m03;
		this->m10 = rhs.m10;
		this->m11 = rhs.m11;
		this->m12 = rhs.m12;
		this->m13 = rhs.m13;
		this->m20 = rhs.m20;
		this->m21 = rhs.m21;
		this->m22 = rhs.m22;
		this->m23 = rhs.m23;
		this->m30 = rhs.m30;
		this->m31 = rhs.m31;
		this->m32 = rhs.m32;
		this->m33 = rhs.m33;
	}

	Matrix& operator=(const Matrix& rhs)
	{
		this->m00 = rhs.m00;
		this->m01 = rhs.m01;
		this->m02 = rhs.m02;
		this->m03 = rhs.m03;
		this->m10 = rhs.m10;
		this->m11 = rhs.m11;
		this->m12 = rhs.m12;
		this->m13 = rhs.m13;
		this->m20 = rhs.m20;
		this->m21 = rhs.m21;
		this->m22 = rhs.m22;
		this->m23 = rhs.m23;
		this->m30 = rhs.m30;
		this->m31 = rhs.m31;
		this->m32 = rhs.m32;
		this->m33 = rhs.m33;

		return *this;
	}


	//Data
	float m00 = 0.0f;
	float m01 = 0.0f;
	float m02 = 0.0f;
	float m03 = 0.0f;
	float m10 = 0.0f;
	float m11 = 0.0f;
	float m12 = 0.0f;
	float m13 = 0.0f;
	float m20 = 0.0f;
	float m21 = 0.0f;
	float m22 = 0.0f;
	float m23 = 0.0f;
	float m30 = 0.0f;
	float m31 = 0.0f;
	float m32 = 0.0f;
	float m33 = 0.0f;
};

#endif

// ---  End of File ---------------
