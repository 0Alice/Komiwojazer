#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{

	int choice;

	do {

		system("cls");

		cout << " Wybierz opcje :\n\n"
			"[1] Brutforce\n"
			"[2] Najblizszy sasiad\n"
			"[3] Algorytm genetyczny\n"
			"[4] Algorytm mrowkowy\n"
			"[0] Koniec\n\n"

			"Twoj wybror: " << endl;

		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			cout << endl;
			break;
		case 2:
			cout << endl;
			break;
		case 3:
			cout << endl;
			break;
		case 4:
			cout << endl;
			break;

			if (choice == 0)
			{
				cout << endl;
				system("pause");
				return 0;

			}

		}
		while (choice);
	} while (false);

	system("pause");
	return 0;

}







