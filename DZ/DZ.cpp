// DZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    //1
    /*int a[5]{ 1,2,3,4,5 };
    for (int i = 4; i >= 0; i--) {
        cout << a[i] << endl;
    }*/

    //2
    /*int a[20];
    srand(time(0));
    for (int i = 0; i < 20; i++) {
        int r = rand() %100;
        a[i] = r;
        if (i%2==0){
            cout << a[i] << endl;
        }
    }*/

    //3
    /*int a[10],d;
    float sum = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        int r = (-20 + (rand() % (20 - -20 + 1)));
        a[i] = r;
        if(a[i]>0) {
            sum += a[i];
            d = i;
        }
    }
    cout << sum << endl << d<<endl;
    cout << sum/d;*/

    //4
    /*int a[10],p=0,m=0,zero=0;
    srand(time(0));
    for (int i = 0; i < 10; i++) 
    {
        int r = (-5 + (rand() % (5 - -5 + 1)));
        a[i] = r;
        if (a[i] > 0) {
            cout << a[i] << endl;
            p +=1;
        }
         else if(a[i] < 0) {
             m += 1;
         }
         else if (a[i] = 0) {
             zero += 1;
         }
         cout << a[i]<<endl;
     }
     cout << "Positive numbers - " << p << endl << "Negative numbers - " << m << endl;*/

    //5
    int a[10], sumChet = 0, sumNeChet = 0;
    float sredn=0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int r = (-15 + (rand() % (45 - -15 + 1)));
        a[i] = r;
        if (a[i] % 2 == 0) {
            sumChet += a[i];
        }
        if (a[i] % 2 != 0)
        {
            sumNeChet += a[i];
            sredn += 1;
        }        
    }
    cout << "Summ Chetnix - " << sumChet << endl << "Srednie Arifmet Ne Chetnix - " << sumNeChet / sredn;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
