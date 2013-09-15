#include <iostream>

void noteOrder()
{
	using namespace std;
	cout << "Pick a note from the selections at the bottom" << endl << endl;
	
	char anArray[] = { 'A', 'a', 'B', 'C', 'c', 'D', 'd', 'E', 'F', 'f', 'G', 'g' };
	
	int arraySize = 0;
	arraySize = sizeof(anArray) / sizeof(anArray[0]);
	
	for (int i = 0; i < arraySize; i++)
	{
		cout << anArray[i] << "\t";
	}
}
