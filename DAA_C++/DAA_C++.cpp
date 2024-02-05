#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <thread>
#include <chrono>
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

const int length = 6;

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
}



// MAIN

int main()
{
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
    } while (!erg);*/


// Einmaleins ME

    //for (int y = 0; y < 11; y++)
    //{
    //    for (int x = 0; x < 11; x++)
    //    {
    //        if (y == 0 && x == 0)
    //        {
    //            cout << " *   ";
    //        }
    //        // X-Zeile
    //        if (y == 0 && x > 0)
    //        {
    //            if (x > 8)
    //            {
    //                cout << x << "  ";
    //            }
    //            else
    //            {
    //                cout << x << "   ";
    //            }
    //        }
    //        // Y-Spalte
    //        if (y > 0 && x == 0)
    //        {
    //            if (y < 10)
    //            {
    //                cout << " " << y << "   ";
    //            }
    //            else
    //            {
    //                cout << y << "  ";
    //            }
    //        }
    //        if (y == 1 && x > 0)
    //        {
    //            if (x * y < 9)
    //            {
    //                cout << x * y << "   ";
    //            }
    //            else
    //            {
    //                cout << x * y << "  ";
    //            }
    //        }
    //        if (y == 2 && x > 0)
    //        {
    //            if (x * y < 8) 
    //            {
    //                cout << x * y << "   ";
    //            }
    //            else
    //            {
    //                cout << x * y << "  ";
    //            }
    //        }
    //        if (y == 3 && x > 0)
    //        {
    //            if (x * y < 8)
    //            {
    //                cout << x * y << "   ";
    //            }
    //            else
    //            {
    //                cout << x * y << "  ";
    //            }
    //        }
    //        if (y == 4 && x > 0)
    //        {
    //            if (x * y < 8)
    //            {
    //                cout << x * y << "   ";
    //            }
    //            else
    //            {
    //                cout << x * y << "  ";
    //            }
    //        }
    //        if (y == 5 && x > 0)
    //        {
    //            cout << x * y << "  ";
    //        }
    //        if (y == 6 && x > 0)
    //        {
    //            cout << x * y << "  ";
    //        }
    //        if (y == 7 && x > 0)
    //        {
    //            cout << x * y << "  ";
    //        }
    //        if (y == 8 && x > 0)
    //        {
    //            cout << x * y << "  ";
    //        }
    //        if (y == 9 && x > 0)
    //        {
    //            cout << x * y << "  ";
    //        }
    //        if (y == 10 && x > 0)
    //        {
    //            if (x * y < 90)
    //            {
    //                cout << x * y << "  ";
    //            }
    //            else
    //            {
    //                cout << x * y << " ";
    //            }
    //        }
    //    }
    //    cout << "\n";
    //}

// Einmaleins Struktogramm

    //int x1 = 0;
    //int x2 = 0;
    //int p = 0;
    //int i = 0; // wofür?

    //cout << " *  "; // geändert von: " * ";

    //for (x2 = 1; x2 <= 10; x2++)
    //{
    //    if (x2 < 10) 
    //    {
    //        cout << " ";   
    //    }
    //    cout << x2 << "  "; // geändert von: " " << x2;
    //}

    //cout << "\n";

    //for (x1 = 1; x1 <= 10; x1++)
    //{
    //    if (x1 < 10)
    //    {
    //        cout << " ";
    //    }
    //    cout << x1; // gelöscht: << " "

    //    for (x2 = 1; x2 <= 10; x2++)
    //    {
    //        p = x1 * x2;

    //        if (p < 10)
    //        {
    //            cout << " ";
    //        }
    //        if (p < 100)
    //        {
    //            cout << " ";      
    //        }
    //        cout << " " << p; // nur ein leerzeichen " "
    //    }
    //    cout << "\n";
    //}


// Arrays Ludwig fragen: im struktogramm benutzt man den menschlichen index? IHK auch?

    /*int array1[4] = { 3, 7, 4, 2 };
    string array2[4] = {"black", "red", "lime", "blue"};
    array1[0] = 8;
    array1[2] = array1[0] + array1[1];
    array1[3] = array1[0] * array1[1];
    array2[0] = "white";
    array2[1] = "";

    cout << array1[0] << array1[1] << array1[2] << array1[3];
    cout << array2[0] << array2[1];*/


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

    int min = 0;
    int max = 0;














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
    cout << "\n";*/

    return 0;
}