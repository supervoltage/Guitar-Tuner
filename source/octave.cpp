#include <iostream>
#include <cstdlib>

int selectOctave()
{
	using namespace std;
	
	cout << "1. Octave 1 (equivalent of x2 octave)" << endl;
	cout << "2. Octave 2 (equivalent of x3 octave)" << endl;
	cout << "3. Octave 3 (equivalent of x4 octave)" << endl << endl;
	
	cout << "Please make your selection: ";
	
	int nOctaveSelect = 0;
	cin >> nOctaveSelect;
	
	switch (nOctaveSelect)
	{
		case 1:
			cout << "Octave 1 selected" << endl;
			break;
		case 2:
			cout << "Octave 2 selected" << endl;
			break;
		case 3:
			cout << "Octave 3 selected" << endl;
			break;
		default:
			cout << "Invalid selection." << endl;
			exit(0);
	}
	return nOctaveSelect;
}
