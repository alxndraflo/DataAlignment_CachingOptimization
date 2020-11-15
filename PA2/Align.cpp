//----------------------------------------------------------------------------
// Copyright Ed Keenan 2019
// Optimized C++
//----------------------------------------------------------------------------

#include "Framework.h"

#include "Align.h"

#define STUB_PLEASE_REPLACE(x) (x)

//-------------------------------------------------------------
// PrintME()
//
// Write your alignment printing function here
//-------------------------------------------------------------

Align::Info Align::PrintME(void *pData, int StructSize, char *pString)
{
	// Use Trace::out(...) to display the data layout and padding
	// Mimic the KeenanSampleOutput_Debug.txt
    // EXACtLY or the grading system will give a 0

	Info info;
	info.NumTotalBytes = StructSize;
	info.NumBytesOfPadding = 0;
	unsigned char* dataBuff = (unsigned char*)pData; //cast to unsigned char to walk through data byte by byte

	// Print data formatted according to sample output
	Trace::out("%s:", pString);
	int index = 0;

	do
	{
		// If the index (offset) is multiple of 4...newline, print offset in hex, and print data in buffer at current location in hex
		if ((index & 0x3) == 0) 
		{
			Trace::out("\n  0x%02x: %02x ", index, *dataBuff);
		}
		// If not multiple of 4, print data at current location in hex
		else
		{
			Trace::out("%02x ", *dataBuff);
		}

		// If data is "AA" then increment numBytesPadding
		if (*dataBuff == 0xAA)
		{
			info.NumBytesOfPadding++;
		}

		dataBuff++;
		index++;

	} while (index < StructSize);
	Trace::out("\n------------------------\nsize : %d\tpadding: %d\n", StructSize, info.NumBytesOfPadding);

	return info;
}

// ---  End of File ---------------
