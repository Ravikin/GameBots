// Ravi | clicker .v2 do clicker heroes, podpina sie pod nazwę okna i klika
#define UNICODE
#include <Windows.h>
#include <iostream>

int main(int argc, char **argv)
{
	HWND Hwnd;

	if ((Hwnd = FindWindow(0, L"Clicker Heroes")))
	{
		setlocale(LC_ALL, "");
		int x, y; // Współrzędne potworka
		x = 850;
		y = 415;

		system("CLS");
		std::cout << "Działam.\nWciśnij CTRL+C aby zakończyć.\n";

		SendMessage(Hwnd, WM_MOUSEMOVE, 0, MAKELPARAM(x, y));
		while (TRUE)
		{

			SendMessage(Hwnd, WM_LBUTTONDOWN, 0, MAKELPARAM(x, y));
			SendMessage(Hwnd, WM_LBUTTONUP, 0, MAKELPARAM(x, y));
			Sleep(5);
		}
	}
	else
	{
		std::cout << "Nie znalazłem okna!";
	}
	return 0;
}
