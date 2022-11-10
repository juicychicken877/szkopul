#include <iostream>

using namespace std;

char alfabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char ALFABET[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main()
{
   int option, liczba;
   string napis;

   cin >> option >> liczba >> napis;

   int j = 0;

    for (int i = 0; i < napis.length(); i++)
    {
        while(true)
        {
            if (napis[i] == alfabet[j]) //jesli jest literka i jest mala
            {
                if (option == 1)
                {

                    if (liczba + j <= 25) //czy sie miesci w tablicy?
                    {
                        napis[i] = alfabet[liczba + j];         break;
                    }
                    else if (liczba + j > 25) //jak sie nie miesci w tablicy
                    {
                        napis[i] = alfabet[(liczba + j) - 26];  break;
                    }
                }
                else if (option == 2)
                {
                    if (j - liczba >= 0)
                    {
                    napis[i] = alfabet[j - liczba];             break;
                    }
                    else if (j - liczba < 0)
                    {
                        napis[i] = alfabet[(j - liczba) + 26];  break;
                    }
                }
            }
            else if (napis[i] == ALFABET[j]) //jesli jest literka i jest DUZA
            {
                if (option == 1)
                {
                    if (liczba + j <= 25) //czy sie miesci w tablicy?
                    {
                        napis[i] = ALFABET[liczba + j];         break;
                    }
                    else if (liczba + j > 25) //jak sie nie miesci w tablicy
                    {
                        napis[i] = ALFABET[(liczba + j) - 26];  break;
                    }
                }
                if (option == 2)
                {
                    if (j - liczba >= 0)
                    {
                    napis[i] = ALFABET[j - liczba];             break;
                    }
                    else if (j - liczba < 0)
                    {
                        napis[i] = ALFABET[(j - liczba) + 26];  break;
                    }
                }
            }
            j++;
            if (j == 26) break;
        }
        j = 0;
    }
    cout << napis << endl;
}
