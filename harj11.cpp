#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int laskutoimitus;
	int lopetus;
	float tulos;
	tulos = 0;
	lopetus = 0;
	do
	{
	cout << "Anna luku 1"<<endl;
	cin >> luku1;
	cout << "Anna luku 2"<<endl;
	cin >> luku2;
	cout << "VALIKKO"<<endl<<"0. Lopetus"<<endl<<"1. Summa"<<endl<<"2. Erotus"<<endl<<"3. Tulo"<<endl<<"4. Osamaara"<<endl<<"5. Jakojaannos"<<endl<< "6. Syota uudet luvut laskemista varten"<<endl;
	cin >> laskutoimitus;
	if (laskutoimitus == 0){
		lopetus++;
		cout << "Lopetetaan"<<endl;}
	else{
	if (laskutoimitus == 1)
		tulos = (luku1 + luku2);
	if (laskutoimitus == 2)
		tulos = (luku1 - luku2);
	if (laskutoimitus == 3)
		tulos = ((float)luku1 * (float)luku2);
	if (laskutoimitus == 4)
		tulos = ((float)luku1 / (float)luku2);
	if (laskutoimitus == 5)
		tulos = (luku1 % luku2);
	if (laskutoimitus == 6){
	}
	else
	cout << "Tulos on "<<tulos<<endl;
	}
	}while (lopetus == 0);
	return 0;
}