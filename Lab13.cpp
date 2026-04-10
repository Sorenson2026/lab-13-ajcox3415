/*This programm will radomly generate a list of 25 initgers, sort them and output them
AJ Cox
4/10/2026*/

#include <iostream>
#include <ctime>
#include <vector>
#include <iomanip>
using namespace std;

void bubbleSort(vector<int> &);
void fillVector(vector<int> & data);

int main()
{
	vector<int> data(25);

	cout << "Hello and welcome." << endl;

	fillVector(data);

	return 0;
}

void fillVector(vector<int> & data)
{
	for (int i = 0; i < 25; i++)
	{
		data[i] = rand() % 100;
		cout << data[i];
		cout << endl;
	}
	
}