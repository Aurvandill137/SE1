#include <iostream>
#include <stdint.h>

using namespace std;

void mask(unsigned int zahl);

int main(int argc, char **argv)
{
	unsigned int x = 0;

	cout << "bitte geben sie eine Integer Zahl ein die in binär umgewandelt werden soll" << endl << "Zahl : ";
	cin >> x;
	mask(x);
	return 0;
}

void mask(unsigned int zahl){

	//erstellung der Maske
	unsigned int maske = 0;
	maske = ~((~(unsigned)0)>>1);

	//while schleife
	while (maske != 0){
	//fallunterscheidung
		//falls es keien 0 ist gebe 1 aus
		if ((zahl & maske) != 0){
			printf ("1");
		}
		//falls 0 gebe 0 aus
		else {
			printf ("0");
		}
	//maske wird um 1 nach rechts verschoben
	maske >>= 1;
	}


}
