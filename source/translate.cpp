#include <iostream>
#include <cstdlib>

double translateNote(char cNote, int octave)
{
	double freq = 0;
	
	switch (cNote)
	{
		case 'A':
			freq = 55.;
			break;
		case 'a':
			freq = 58.27;
			break;
		case 'B':
			freq = 61.74;
			break;
		case 'C':
			freq = 65.41;
			break;
		case 'c':
			freq = 69.3;
			break;
		case 'D':
			freq = 73.42;
			break;
		case 'd':
			freq = 77.78;
			break;
		case 'E':
			freq = 82.41;
			break;
		case 'F':
			freq = 87.31;
			break;
		case 'f':
			freq = 92.5;
			break;
		case 'G':
			freq = 98.;
			break;
		case 'g':
			freq = 103.83;
			break;
		default:
			std::cout << "Something happened and I pooped." << std::endl;
			exit(0);
	}
	
	freq = freq * octave;
	
	return freq;
}
