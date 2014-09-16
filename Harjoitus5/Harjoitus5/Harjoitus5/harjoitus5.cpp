/*Harjoitus 5
Sami Liimatainen
IIO14S1
16.9.2014
Versio 1.0

Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.

Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.

Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
*/

#include <iostream> 
using namespace std;
int main()
{
	int luku1;
	int luku2;

	cout << "anna luku 1";
	cin >> luku1;

	cout << "anna luku 2";
	cin >> luku2;

	if (luku1 == luku2)
		cout << "BINGO";
	else
		cout << "BONGO";
}