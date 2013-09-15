#include <iostream>
#include <cstdlib>
#include "noteOrder.h"
#include "octave.h"
#include "compareinput.h"
#include "translate.h"
#include "sinegen.h"

int main()
{
	using namespace std;
	cout << "Guitar tuner covering 3 octaves of various pitches" << endl;
	
	noteOrder();
	
	cout << endl << endl;
	
	cout << "Selection: ";
	char nMenu;
	cin >> nMenu;
	
	compareInput(nMenu); // check if the selection above is valid
	
	cout << "You chose " << nMenu << ". Please select the octave." << endl << endl;
	
	int nOctaveSelect = 0;
	nOctaveSelect = selectOctave();
	
	double frequency = translateNote(nMenu, nOctaveSelect);
	
	cout << "Playing note " << nMenu << " at octave " << nOctaveSelect << ". ";
	cout << "Control-C to exit program." << endl;

	sineGenerator(frequency);
	
	return 0;
}
