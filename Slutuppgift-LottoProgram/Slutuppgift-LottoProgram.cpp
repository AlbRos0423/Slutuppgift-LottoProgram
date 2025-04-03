#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "sv_SE");

	while (true) {
		std::cout << "\nV�lkommen till detta extravaganta lotto-program d�r du har chansen att vinna 10 miljoner kr!\n";
		std::cout << "V�nligen v�lj din lottorad genom att v�lja 7 nummer mellan 1 och 35: \n";
		int ln1, ln2, ln3, ln4, ln5, ln6, ln7;						//Skapar dina 7 lottnummer
		cin >> ln1 >> ln2 >> ln3 >> ln4 >> ln5 >> ln6 >> ln7;		//Kopplar dina lottnummer med dina angivna v�rden

		if (ln1 < 1 || ln1 > 35 || ln2 < 1 || ln2 > 35 || ln3 < 1 || ln3 > 35 || ln4 < 1 || ln4 > 35 || ln5 < 1 || ln5 > 35 || ln6 < 1 || ln6 > 35 || ln7 < 1 || ln7 > 35) {
			//Kontrollerar om alla lottnummer �r mellan 1 & 35. Skriver annars ut ett felmeddelande.
			std::cout << "\nAlla din nummer �r inte mellan 1 och 35!";
			Sleep(250);

		}

		else {

			std::cout << "\nDin lottorad: " << ln1 << " " << ln2 << " " << ln3 << " " << ln4 << " " << ln5 << " " << ln6 << " " << ln7 << "\n\n";
			//Skriver ut din lottrad och slumpar sedan fram den korrekta lottraden.

			srand(time(0));
			int i, randNum;
			double correct = 0;

			std::cout << "Den korrekta lottoraden: \n";

			for (i = 0; i < 7; i++) {
				randNum = rand() % 35 + 1;
				std::cout << randNum << "\n";

				if (i == 0 && randNum == ln1) { //Om det f�rsta lottnummret st�mmer �verense med ditt f�rsta lottnummer, s� f�r du ett r�tt
					correct++;
				}
				else if (i == 1 && randNum == ln2) {
					correct++;
				}
				else if (i == 2 && randNum == ln3) {
					correct++;
				}
				else if (i == 3 && randNum == ln4) {
					correct++;
				}
				else if (i == 4 && randNum == ln5) {
					correct++;
				}
				else if (i == 5 && randNum == ln6) {
					correct++;
				}
				else if (i == 6 && randNum == ln7) {
					correct++;
				}

			}
			std::cout << "Antal r�tt: " << correct;
			//Kollar antal r�tt och presenterar din eventuella vinst

			if (correct == 3) {
				std::cout << "\nGrattis! Du hade 3 r�tt och har vunnit 50 SEK!\n";
			}
			else if (correct == 4) {
				std::cout << "\nVem hade kunnat ana? 4 r�tt! Det inneb�r att du har vunnit hela 100 SEK!\n";
			}
			else if (correct == 5) {
				std::cout << "\nRiktigt bra gissat! 5 r�tt inneb�r 10 000 SEK in p� kontot!\n";
			}
			else if (correct == 6) {
				std::cout << "\nIngen �r b�st p� allt, men du verkar vara riktigt bra p� lottorader! 6 r�tt och en halv miljon att njuta av!\n";
			}
			else if (correct == 7) {
				std::cout << "\nJACKPOT! Du har vunnit 10 000 000 SEK! Stort grattis!\n";
			}
			else
				std::cout << "\nDu vann tyv�rr inget denna g�ngen.\n";
		}

		Sleep(2000); //V�ntar innan den k�r igen

	}
	return 0;

}