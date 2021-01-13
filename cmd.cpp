#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	while (true) 
	{
		string question;
		cout << "\n1.color, 2.ipconfig, 3.cls: ";
		cin >> question;
		if (question == "color" || question == "01" || question == "1")
		{
			int yesNo;
			cout << "Do you want to 1.loop color or 2.restart: ";
			cin >> yesNo;
			if (yesNo == 1)
			{
				while (true) {
					int color;
					cout << "\n0 = Black\n";
					cout << "\n1 = Blue\n";
					cout << "\n2 = Green\n";
					cout << "\n3 = Aqua\n";
					cout << "\n4 = Red\n";
					cout << "\n5 = Purple\n";
					cout << "\n6 = Yellow\n";
					cout << "\n7 = White\n";
					cout << "\n8 = Gray\n";
					cout << "\n9 = Light Blue\n";
					cout << "\n10 = exit program\n";
					cout << "\n11 = restart program\n";
					cout << "\n12.cls\n";
					cout << "\ncolor: ";
					cin >> color;
					if (color == 01)
					{
						system("color 01");
					}
					else if (color == 02)
					{
						system("color 02");
					}
					else if (color == 03)
					{
						system("color 03");
					}
					else if (color == 04)
					{
						system("color 04");
					}
					else if (color == 05)
					{
						system("color 05");
					}
					else if (color == 06)
					{
						system("color 06");
					}
					else if (color == 07)
					{
						system("color 07");
					}
					else if (color == 0X8)
					{
						system("color 08");
					}
					else if (color == 0X9)
					{
						system("color 09");
					}
					else if (color == 10)
					{
						exit(0);
					}
					else if (color == 11)
					{
						system("cls");
						system("color F");
						main();
					}
					else if (color == 12)
					{
						system("cls");
					}
					else
					{
						main();
					}
				}
			}
			else if (yesNo == 2)
			{
				main();
			}
		}
		else if (question == "ipconfig" || question == "02" || question == "2")
		{
			system("ipconfig");
		} 
		else if (question == "cls" || question == "03" || question == "3")
		{
			system("cls");
		}
		else
		{
			exit(1);
		}
	}
	return 0;
}
