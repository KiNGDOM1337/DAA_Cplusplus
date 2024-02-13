#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <thread>
#include <chrono>
#include <ctime>
#include <algorithm>
using namespace std;


// zu PARTY..

//void printCombination(bool adele, bool bernd, bool clara, bool dirk) {
//    cout << "Adele: " << (adele ? "geht" : "bleibt") << ", ";
//    cout << "Bernd: " << (bernd ? "geht" : "bleibt") << ", ";
//    cout << "Clara: " << (clara ? "geht" : "bleibt") << ", ";
//    cout << "Dirk: " << (dirk ? "geht" : "bleibt") << endl;
//}



// zu BUBBLESORT

/*const int length = 6;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}*/



// MAIN


int main()
{






    /*
    // Sie haben eine Liste von Temperaturwerten für einen bestimmten Zeitraum.
    // Ihre Aufgabe ist es, die höchste Anzahl aufeinanderfolgender Werte zu finden,
    // die größer oder gleich 22 Grad Celsius sind.

    const int LENGTH = 13;
    int templist[LENGTH] = { 20, 22, 23, 21, 19, 18, 20, 22, 23, 23, 24, 22, 21 };
    //int templist[LENGTH] = { 23, 24, 22, 22, 23, 22, 23, 18, 20, 22, 23, 21 };


    int counter{};
    int temp{};

    for (int i = 0; i < LENGTH; ++i)
    {
        if (templist[i] >= 22)
        {
            temp++;
            cout << templist[i] << " ";
        }
        else
        {
            if (counter < temp)
            {
                counter = temp;
            }

            temp = 0;
        }
    }

    cout << counter;
    */


    /*
    // Schreiben Sie ein Programm, dass das ein 1. Array mit 10 zufälligen Ganzzahlen zwischen 1 und 99 erzeugt.
    // Danach das 2. Array soll die gleichen Zahlen haben aber in umgekehrter Reihenfolge.
    // Danach sollen die Elemente summiert und das Ergebnis in ein drittes Array geschrieben werden.
    // Danach geben Sie das Ergebnis der Addition aus.

    srand(time(nullptr));

    const int LENGTH{ 10 };

    int iArray[LENGTH]{};
    int iArray2[LENGTH]{};
    int iArray3[LENGTH]{};

    
    // iArray mit Zufallszahlen füllen
    cout << "Array 1: ";

    int counter{9};
    for (int i = 0; i < LENGTH; ++i)
    {
        iArray[i] = rand() % 99 + 1;
        iArray2[counter] = iArray[i];
        cout << iArray[i] << " ";

        counter--;
    }
    
                // int iArray[LENGTH]{ 10, 20, 30, 40, 50 };


    // iArray umkehren -- iArray2 lebt
    cout << "\nArray 2: ";

    for (int i = 0; i < LENGTH; ++i)
    {
        cout << iArray2[i] << " ";
    }
    

    // iArray iArray2 summieren = iArray3
    cout << "\nArray 3: ";

    for (int i = 0; i < LENGTH; ++i)
    {
        iArray3[i] = iArray[i] + iArray2[i];
        cout << iArray3[i] << " ";
    }


    // Ausgabe nach Bild
    cout << "\n";
    cout << "\n";

    for (int i = 0; i < LENGTH; ++i)
    {
        cout << iArray[i] << " + " << iArray2[i] << " = " << iArray3[i] << endl;
    }
    */

    /*
    // Schreiben Sie ein Programm, das ein Array mit 10 zufälligen Ganzzahlen zwischen 1 und 99 erstellt.
    // Finden Sie dann die höchste Zahl im Array und tauschen sie diese dann mit der letzten Stelle im Array
    // so dass die größte Zahl hinten steht.Schließlich geben Sie das aktualisierte Array aus.

    // Tipp: #include <ctime>, srand(time(NULL)), rand() % Maxwert

    srand(time(nullptr));

    const int LENGTH{ 10 };
    int iArray[LENGTH]{};

    int max{ iArray[0] };


    for (int i = 0; i < LENGTH; ++i)
    {
        iArray[i] = rand() % 99 + 1;
    }

    for (int i = 0; i < LENGTH; ++i)
    {
        if (iArray[i] > max) max = iArray[i];
    }

    for (int i = 0; i < LENGTH; ++i)
    {
        cout << iArray[i] << " ";
    }


    cout << "Max: " << max << endl;


    for (int i = 0; i < LENGTH; ++i)
    {
        if (iArray[i] == max)
        {
            int temp = iArray[LENGTH - 1];
            iArray[LENGTH - 1] = iArray[i];
            iArray[i] = temp;
        }
    }

    for (int i = 0; i < LENGTH; ++i)
    {
        cout << iArray[i] << " ";
    }
    */



    /*
    int templist[13] = {20, 22, 23, 17, 22, 24, 22, 18, 23, 23, 22, 20, 21};
    vector<int> item{};

    for (int thing : templist)
    {
        item.push_back(thing);
    }

    for (int thing : item)
    {
        cout << thing << " ";
    }*/

    /*int templist[13] = {20, 22, 23, 17, 22, 24, 22, 18, 23, 23, 22, 20, 21};
    int n = sizeof(templist) / sizeof(templist[0]);

    std::vector<int> result{};
    std::vector<int> current_sequence{};

    for (int i = 0; i < n; ++i) {
        if (templist[i] >= 22) {
            current_sequence.push_back(templist[i]);
        }
        else {
            if (current_sequence.size() > result.size()) {
                result = current_sequence;
            }
            current_sequence.clear();
        }
    }

    if (current_sequence.size() > result.size()) {
        result = current_sequence;
    }

    std::cout << "Die größte aufeinanderfolgende Sequenz größer oder gleich 22 ist: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;*/

    /*
    // Sie haben eine Liste von Temperaturwerten für einen bestimmten Zeitraum.Ihre Aufgabe ist es,
    // die höchste Anzahl aufeinanderfolgender Werte zu finden, die größer oder gleich 22 Grad Celsius sind.
    int templist[13]{ 20, 22, 23, 23, 24, 22, 18, 22, 23, 21, 24, 22, 20 };
    //int templist[13]{ 20, 22, 23, 21, 19, 18, 20, 22, 23, 23, 24, 22, 21 };
    int counter{};
    int temp{};


    for (int i = 0; i < size(templist); ++i)
    {
        if (templist[i] >= 22)
        {
            temp++;
            cout << templist[i] << " ";
        }
        else
        {
            if (temp > counter)
            {
                counter = temp;
            }
            else
            {
                temp = 0;
                cout << endl;
            }
        }
    }

    cout << "Anzahl: " << counter;*/


    // Sie haben eine Liste von Temperaturwerten für einen bestimmten Zeitraum.
    // Ihre Aufgabe ist es, die höchste Anzahl aufeinanderfolgender Werte zu finden, die größer oder gleich 22 Grad Celsius sind.

    /*int templist[13]{20, 22, 23, 21, 19, 18, 20, 22, 23, 23, 24, 22, 21};

    int max = templist[0];
    int min = templist[1];

    for (int i = 0; i < size(templist); ++i)
    {
        if (max < templist[i])
            max = templist[i];
        if (min > templist[i])
            min = templist[i];
    }

    cout << max << endl << min << endl;


    for (int i = 0; i < size(templist) - 1; ++i)
    {
        for (int j = 0; j < size(templist) - 1; ++j)
        {
            if (templist[j] > templist[j + 1])
            {
                int temp = templist[j];
                templist[j] = templist[j + 1];
                templist[j + 1] = temp;
            }
        }
    }

    int counter{};

    for (int i = 0; i < size(templist); ++i)
    {
        if (templist[i] >= 22)
        {
            counter++;

            if (templist[i] > max)
            cout << templist[i] << " ";
            if (templist[i] == templist[i + 1])
                counter--;
            
        }
    }

    cout << counter;*/




    // Schreiben Sie ein Programm, dass das ein 1. Array mit 10 zufälligen Ganzzahlen zwischen 1 und 99 erzeugt.
    // Danach das 2. Array soll die gleichen Zahlen haben aber in umgekehrter Reihenfolge.
    // Danach sollen die Elemente summiert und das Ergebnis in ein drittes Array geschrieben werden.
    // Danach geben Sie das Ergebnis der Addition aus.
    /*srand(time(nullptr));


    int iArray[10]{};

    for (int i = 0; i < size(iArray); ++i)
    {
        iArray[i] = rand() % 99 + 1;
        cout << iArray[i] << " ";
    }

    cout << endl;

    int iArray2[10]{};
    int j = 0;

    for (int i = 9; i >= 0; --i)
    {
        iArray2[j] = iArray[i];
        cout << iArray2[j] << " ";
        j++;
    }

    cout << endl;
    
    int iArray3[10]{};

    for (int i = 0; i < size(iArray2); ++i)
    {
        iArray3[i] = iArray[i] + iArray2[i];
        cout << iArray3[i] << " ";
    }*/




    // Schreiben Sie ein Programm, das zu einem Anfangskapital 1234 € bei einem vorgegebenen jährlichen Zinssatz von 11, 2 % das Kapital berechnet.
    // Wie viele Jahre werden benötigt, damit das Kapital eine bestimmte Zielsumme von 5899€ überschreitet.
    // Sie müssen eine Schleife benutzen, um Kapital für das Jahr zu bestimmen.


    /*double kapital = 1234.0;
    double p = 0.112;
    int i = 0;
    
    while (kapital < 5899)
    {
        cout << "Jahr " << i << ": " << kapital << endl;
        kapital *= 1 + p;
        i++;
    }*/




    /*for (int y = 1; y < 11; y++)
    {
        for (int x = 1; x < 11; x++)
        {
            if (x == 1 && y < 11)
            {
                cout << y << "\t";
            }

            if (y == 1 && x > 1)
            {
                cout << x << "\t";
            }

            if (y == 2 && x > 1)
            {
                cout << x * y << "\t";
            }

            if (y == 3 && x > 1)
            {
                cout << x * y << "\t";
            }

            if (y == 4 && x > 1)
            {
                cout << x * y << "\t";
            }

            if (y == 5 && x > 1)
            {
                cout << x * y << "\t";
            }

            if (y == 6 && x > 1)
            {
                cout << x * y << "\t";
            }

            if (y == 7 && x > 1)
            {
                cout << x * y << "\t";
            }

            if (y == 8 && x > 1)
            {
                cout << x * y << "\t";
            }

            if (y == 9 && x > 1)
            {
                cout << x * y << "\t";
            }
            
            if (y == 10 && x > 1)
            {
                cout << x * y << "\t";
            }
        }
        cout << endl;
    }*/


    // # BILD

    /*int rows{21};
    int cols{20};

    for (int y = 0; y < rows; y++)
    {
        for (int x = 0; x < cols; x++)
        {

            // Zeile 1: #
            if (y == 0 && x < cols)
            {
                cout <<  "#";
            }

            // Zeile 2: *
            if (y == 1 && x == 0)
            {
                cout << "*";
            }

            // Zeile 2: #
            if (y == 1 && x > 0)
            {
                cout << "#";
            }

            // Zeile 3: **
            if (y == 2 && x < 2)
            {
                cout << "*";
            }

            // Zeile 3: #
            if (y == 2 && x > 1)
            {
                cout << "#";
            }

            // Zeile 4: ***
            if (y == 3 && x < 3)
            {
                cout << "*";
            }

            // Zeile 4: #
            if (y == 3 && x > 2)
            {
                cout << "#";
            }

            // Zeile 5: *
            if (y == 4 && x < 4)
            {
                cout << "*";
            }

            // Zeile 5: #
            if (y == 4 && x > 3)
            {
                cout << "#";
            }

            // Zeile 6: *
            if (y == 5 && x < 5)
            {
                cout << "*";
            }

            // Zeile 6: #
            if (y == 5 && x > 4)
            {
                cout << "#";
            }

            // Zeile 7: *
            if (y == 6 && x < 6)
            {
                cout << "*";
            }

            // Zeile 7: #
            if (y == 6 && x > 5)
            {
                cout << "#";
            }

            // Zeile 8: *
            if (y == 7 && x < 7)
            {
                cout << "*";
            }

            // Zeile 8: #
            if (y == 7 && x > 6)
            {
                cout << "#";
            }

            // Zeile 9: *
            if (y == 8 && x < 8)
            {
                cout << "*";
            }

            // Zeile 9: #
            if (y == 8 && x > 7)
            {
                cout << "#";
            }

            // Zeile 10: *
            if (y == 9 && x < 9)
            {
                cout << "*";
            }

            // Zeile 10: #
            if (y == 9 && x > 8)
            {
                cout << "#";
            }

            // Zeile 11: ***
            if (y == 10 && x < 10)
            {
                cout << "*";
            }

            // Zeile 11: #
            if (y == 10 && x > 9)
            {
                cout << "#";
            }

            // Zeile 12: *
            if (y == 11 && x < 11)
            {
                cout << "*";
            }

            // Zeile 12: #
            if (y == 11 && x > 10)
            {
                cout << "#";
            }

            // Zeile 13: *
            if (y == 12 && x < 12)
            {
                cout << "*";
            }

            // Zeile 13: #
            if (y == 12 && x > 11)
            {
                cout << "#";
            }

            // Zeile 14: *
            if (y == 13 && x < 13)
            {
                cout << "*";
            }

            // Zeile 14: #
            if (y == 13 && x > 12)
            {
                cout << "#";
            }

            // Zeile 15: *
            if (y == 14 && x < 14)
            {
                cout << "*";
            }

            // Zeile 15: #
            if (y == 14 && x > 13)
            {
                cout << "#";
            }

            // Zeile 16: *
            if (y == 15 && x < 15)
            {
                cout << "*";
            }

            // Zeile 16: #
            if (y == 15 && x > 14)
            {
                cout << "#";
            }

            // Zeile 17: *
            if (y == 16 && x < 16)
            {
                cout << "*";
            }

            // Zeile 17: #
            if (y == 16 && x > 15)
            {
                cout << "#";
            }

            // Zeile 18: *
            if (y == 17 && x < 17)
            {
                cout << "*";
            }

            // Zeile 18: #
            if (y == 17 && x > 16)
            {
                cout << "#";
            }

            // Zeile 19: *
            if (y == 18 && x < 18)
            {
                cout << "*";
            }

            // Zeile 19: #
            if (y == 18 && x > 17)
            {
                cout << "#";
            }

            // Zeile 20: *
            if (y == 19 && x < 19)
            {
                cout << "*";
            }


            // Zeile 20: #
            if (y == 19 && x > 18)
            {
                cout << "#";
            }

            if (y == rows - 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // # BILD LUDWIG

    /*int imax = 20 + 1;
    int jmax = imax - 1;

    for (int i = 1; i < imax; ++i)
    {
        for (int j = 0; j < jmax; ++j)
        {
            if (i <= j)
                cout << "#";
            else
                cout << "*";
        }
        cout << "\n";
    }*/
 

    // TANNENBAUM

    /*int rows{10};
    int cols{19};

    for (int y = 0; y < rows; ++y)
    {
        for (int x = 0; x < cols; ++x)
        {
            if (y == 0 && x != cols / 2)
            {
                cout << " ";
            }

            if (y == 0 && x == cols / 2)
            {
                cout << "*";
            }

            if (y == 1 && x != cols / 2 - 1)
            {
                cout << " ";
            }

            if (y == 1 && x == cols / 2 - 1)
            {
                cout << "***";
            }

            if (y == 2 && x != cols / 2 - 2)
            {
                cout << " ";
            }

            if (y == 2 && x == cols / 2 - 2)
            {
                cout << "*****";
            }

            if (y == 3 && x != cols / 2 - 3)
            {
                cout << " ";
            }

            if (y == 3 && x == cols / 2 - 3)
            {
                cout << "*******";
            }

            if (y == 4 && x != cols / 2 - 4)
            {
                cout << " ";
            }

            if (y == 4 && x == cols / 2 - 4)
            {
                cout << "*********";
            }

            if (y == 5 && x != cols / 2 - 5)
            {
                cout << " ";
            }

            if (y == 5 && x == cols / 2 - 5)
            {
                cout << "***********";
            }

            if (y == 6 && x != cols / 2 - 6)
            {
                cout << " ";
            }

            if (y == 6 && x == cols / 2 - 6)
            {
                cout << "*************";
            }

            if (y == 7 && x != cols / 2 - 7)
            {
                cout << " ";
            }

            if (y == 7 && x == cols / 2 - 7)
            {
                cout << "***************";
            }

            if (y == 8 && x != cols / 2 - 8)
            {
                cout << " ";
            }

            if (y == 8 && x == cols / 2 - 8)
            {
                cout << "*****************";
            }

            if (y == 9 && x != cols / 2 - 9)
            {
                cout << " ";
            }

            if (y == 9 && x == cols / 2 - 9)
            {
                cout << "*******************";
            }

        }
        cout << endl;
    }*/
    
    
// Potenz

    /*int potenz = 0;

    cin >> potenz;

    switch (potenz)
    {
    case 1:
        cout << "Expon. = 0";
        break;
    case 2:
        cout << "Expon. = 1";
        break;
    case 4:
        cout << "Expon. = 2";
        break;
    case 8:
        cout << "Expon. = 3";
        break;
    case 16:
        cout << "Expon. = 4";
        break;
    default:
        cout << "Expon. nicht erkannt";
        break;
    }*/

// Fallunterscheidung

    /*int zahl = 0;
    cout << "Bitte Zahl eingeben: ";
    cin >> zahl;

    switch (zahl)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        cout << "Die Zahlt hat den Wert 1";
        break;
    default:
        cout << "Die Zahlt wurde nicht erkannt";
        break;
    }*/


// Zahlenraten ME

    /*srand(time(nullptr));

    int zz = rand() % 100 + 1;
    int eingabe = 0;

    do
    {
        cout << "Zahl erraten: ";
        cin >> eingabe;

        if (zz < eingabe)
        {
            cout << "Zahl ist kleiner\n\n";
        }
        else if (zz > eingabe)
        {
            cout << "Zahl ist groesser\n\n";
        }
        else
        {
            cout << "Glueckwunsch\n";
        }
    } while (eingabe != zz);*/


// Zahlenraten Ludwig

    /*int zahl = 0;
    int eingabe = 0;

    bool erg = false;

    cout << "Zahlenraten\n";
    cout << "===========\n\n";

    srand(time(nullptr));
    zahl = rand() % 100 + 1;

    do
    {
        cout << "Zahl eingeben: ";
        cin >> eingabe;

        if (zahl < eingabe)
        {
            cout << "Zahl ist kleiner\n\n";
        }
        else if (zahl > eingabe)
        {
            cout << "Zahl ist groesser\n\n";
        }
        else if (zahl == eingabe)
        {
            cout << "Glueckwunsch\n";
            erg = true;
        }
    } while (!erg);
    */


/*
// Einmaleins ME

    for (int y = 0; y < 11; y++)
    {
        for (int x = 0; x < 11; x++)
        {
            if (y == 0 && x == 0)
            {
                cout << " *   ";
            }
            // X-Zeile
            if (y == 0 && x > 0)
            {
                if (x > 8)
                {
                    cout << x << "  ";
                }
                else
                {
                    cout << x << "   ";
                }
            }
            // Y-Spalte
            if (y > 0 && x == 0)
            {
                if (y < 10)
                {
                    cout << " " << y << "   ";
                }
                else
                {
                    cout << y << "  ";
                }
            }
            if (y == 1 && x > 0)
            {
                if (x * y < 9)
                {
                    cout << x * y << "   ";
                }
                else
                {
                    cout << x * y << "  ";
                }
            }
            if (y == 2 && x > 0)
            {
                if (x * y < 8) 
                {
                    cout << x * y << "   ";
                }
                else
                {
                    cout << x * y << "  ";
                }
            }
            if (y == 3 && x > 0)
            {
                if (x * y < 8)
                {
                    cout << x * y << "   ";
                }
                else
                {
                    cout << x * y << "  ";
                }
            }
            if (y == 4 && x > 0)
            {
                if (x * y < 8)
                {
                    cout << x * y << "   ";
                }
                else
                {
                    cout << x * y << "  ";
                }
            }
            if (y == 5 && x > 0)
            {
                cout << x * y << "  ";
            }
            if (y == 6 && x > 0)
            {
                cout << x * y << "  ";
            }
            if (y == 7 && x > 0)
            {
                cout << x * y << "  ";
            }
            if (y == 8 && x > 0)
            {
                cout << x * y << "  ";
            }
            if (y == 9 && x > 0)
            {
                cout << x * y << "  ";
            }
            if (y == 10 && x > 0)
            {
                if (x * y < 90)
                {
                    cout << x * y << "  ";
                }
                else
                {
                    cout << x * y << " ";
                }
            }
        }
        cout << "\n";
    }
    */

/*
// Einmaleins Struktogramm

    int x1 = 0;
    int x2 = 0;
    int p = 0;
    int i = 0; // wofür?

    cout << " *  "; // geändert von: " * ";

    for (x2 = 1; x2 <= 10; x2++)
    {
        if (x2 < 10) 
        {
            cout << " ";   
        }
        cout << x2 << "  "; // geändert von: " " << x2;
    }

    cout << "\n";

    for (x1 = 1; x1 <= 10; x1++)
    {
        if (x1 < 10)
        {
            cout << " ";
        }
        cout << x1; // gelöscht: << " "

        for (x2 = 1; x2 <= 10; x2++)
        {
            p = x1 * x2;

            if (p < 10)
            {
                cout << " ";
            }
            if (p < 100)
            {
                cout << " ";      
            }
            cout << " " << p; // nur ein leerzeichen " "
        }
        cout << "\n";
    }
    */



/*
// Arrays Ludwig fragen: im struktogramm benutzt man den menschlichen index? IHK auch?

    int array1[4] = { 3, 7, 4, 2 };
    string array2[4] = {"black", "red", "lime", "blue"};
    array1[0] = 8;
    array1[2] = array1[0] + array1[1];
    array1[3] = array1[0] * array1[1];
    array2[0] = "white";
    array2[1] = "";

    cout << array1[0] << array1[1] << array1[2] << array1[3];
    cout << array2[0] << array2[1];
*/

// Min Max Pointer

    /*int array[6] = { 0, 0, 0, 0, 0, 0 };

    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
    }
    
    int* minValuePtr = min_element(begin(array), end(array));
    int* maxValuePtr = max_element(begin(array), end(array));

    cout << "Min: " << *minValuePtr << "\nMax: " << *maxValuePtr;*/

// Min Max

    /*int array[6] = { 0, 0, 0, 0, 0, 0 };

    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }

    int min = array[0];
    int max = array[5];

    for (int i = 0; i < 6; i++)
    {
        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }

    cout << "\nMin: " << min << "\nMax: " << max;*/




// Min Max

    //int min = 0;
    //int max = 0;














// Lotto keine doppelt


    /*srand(time(nullptr));

    int lottozahlen[6] = { 0, 0, 0, 0, 0, 0 };
    int i = 0;
    int j = 0;


        for (i = 0; i < size(lottozahlen); i++)
        {
            j = 0;

            lottozahlen[i] = rand() % 49 + 1;

            while (j < i)
            {
                if (lottozahlen[i] == lottozahlen[j] ? lottozahlen[i] = rand() % 49 + 1 : j++);
    
            }
        }

        for (i = 0; i < size(lottozahlen); i++)
        {
            cout << lottozahlen[i] << " ";
        }*/


// Structo pw gen

    //std::string pw = "";
    //
    ////int z = 0; LUDWIG & NIKLAS: FRAGEN WAS IST BESSER?
    //int anzahl = 8;
    //int i = 0;

    //std::vector<int> counter = {};

    //srand(time(nullptr));

    //while (i < anzahl)
    //{
    //    counter.push_back(i);

    //    int z = rand() % 128;

    //    if (z >= 48 && z <= 57 || z >= 65 && z <= 90 || z >= 97 && z <= 122)
    //    {
    //        pw += char(z);
    //        i++;
    //    }
    //}

    //std::cout << pw;

    //std::cout << "\nWiederholungen: " << size(counter);
   
    
// Ludwig pw gen

    /*int i = 0;
    int zeichenwert = 0;
    string passwort = "";
    srand(time(0));

    cout << "Passwort generieren\n";
    for (int j = 0; j < 50; j++)
    {
        passwort = "";
        for (i = 0; i < 8; i++)
        {
            zeichenwert = rand() % 62;

            if (zeichenwert < 10)
            {
                passwort += char(48 + zeichenwert);
            }
            else if (zeichenwert < 36)
            {
                passwort += char(55 + zeichenwert);
            }
            else
            {
                passwort += char(61 + zeichenwert);
            }
        }
        cout << "\nPasswort " << j + 1 << ": " << passwort;
    }*/


// Palindrom

    /*int input = 0;

    cout << "Zahl auf Palindrom pr" << char(129) << "fen: ";
    cin >> input;

    int number = input;
    int lastDigit = 0;
    int rebmun = 0;

    while (number > 0)
    {
        lastDigit = number % 10;
        rebmun = rebmun * 10 + lastDigit;
        number /= 10;
    }

    cout << number << "\n";
    cout << rebmun << "\n";

    if (rebmun == input ? cout << "Palindrom!\n" : cout << "Kein Palindrom!\n");*/


























// Party WTF...

        /*for (bool adele : {true, false}) 
        {
            for (bool bernd : {true, false}) 
            {
                for (bool clara : {true, false}) 
                {
                    for (bool dirk : {true, false}) 
                    {
                        if (!(adele && dirk) &&
                            (bernd || !clara) &&
                            !(adele && clara) &&
                            (adele || dirk || clara)) 
                        {
                            printCombination(adele, bernd, clara, dirk);
                        }
                    }
                }
            }
        }*/


// Bubblesort

    /*int arr[length] = {0, 0, 0, 0, 0, 0};
    int j = 0;
    srand(time(nullptr));

    for (int i = 0; i < length; i++)
    {
        j = 0;
        arr[i] = rand() % 99 + 1;

        while (j < i)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = rand() % 99 + 1;
            }
            else
            {
                j++;
            }
        }
        
    }


    cout << "Unsortiert: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    bubbleSort(arr, length);

    cout << "\nSortiert: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    */

    return 0;
}