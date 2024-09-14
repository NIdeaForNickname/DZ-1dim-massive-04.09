// 1dim-massive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    // task 20

    /*const int SIZE_CHARS = 4;
    const int SIZE_NUMS = 4000;

    string romChars[SIZE_CHARS][2] = {
        {"I", "V"},  
        {"X", "L"},  
        {"C", "D"},  
        {"M", "E"}   
    };

    string sArr[SIZE_NUMS] = {};  
    int iArr[SIZE_NUMS] = {};     

    for (int i = 0; i < SIZE_NUMS; i++) {
        iArr[i] = i;
    }

    string ans;
    int clen, divisor;
    int var, var1;

    int temp;

    for (int i = 1; i < SIZE_NUMS; i++) {
        ans = "";
        var = 0;
        temp = iArr[i];

        while (temp != 0) {
            var++;
            temp /= 10;
        }

        temp = iArr[i];  

        for (int j = 0; j < var; j++) {
            clen = var - j - 1;

            divisor = pow(10, clen);
            var1 = temp / divisor;
            temp %= divisor;

            switch (var1) {
            case 1: ans = ans + romChars[clen][0]; break;
            case 2: ans = ans + romChars[clen][0] + romChars[clen][0]; break;
            case 3: ans = ans + romChars[clen][0] + romChars[clen][0] + romChars[clen][0]; break;
            case 4: ans = ans + romChars[clen][0] + romChars[clen][1]; break;
            case 5: ans = ans + romChars[clen][1]; break;
            case 6: ans = ans + romChars[clen][1] + romChars[clen][0]; break;
            case 7: ans = ans + romChars[clen][1] + romChars[clen][0] + romChars[clen][0]; break;
            case 8: ans = ans + romChars[clen][1] + romChars[clen][0] + romChars[clen][0] + romChars[clen][0]; break;
            case 9: ans = ans + romChars[clen][0] + romChars[clen + 1][0]; break;
            default: break;
            }
        }

        cout << ans << endl;
        sArr[i] = ans;
    }*/


    // task 21 P.S сделал на английском потому что так легче (нет окончаний)


    /*int clen, cdig, divisor;
    int userInput = 0;
    do {
        cout << "Input number (1 - 1000000): ";
        cin >> userInput;
    } while (0 >= userInput >= 1000000);

    string NumNames[2] = {"thousand", "million"};
    string SubNames[2][9] = {
        {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"},
        {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"}
    };
    string TensNames[9] = {"eleven", "tvelwe", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    string ans = "";
    int var = 0;
    int temp = userInput;

    while (temp != 0) {
        var++;
        temp /= 10;
    }

    int temp1;

    for (int i = var - 1; i >= 0; i--) {
        clen = i / 3;
        cdig = i % 3;
        temp = userInput;

        divisor = pow(10, i);
        temp = temp / divisor % 10;


        switch (cdig) {
        case 1:
            divisor = pow(10, i - 1);
            temp1 = userInput / divisor % 10;
            if (temp1 != 0 && temp == 1) {
                cout << TensNames[temp1 - 1];
                cout << " ";
            }
            else if( temp != 0 ){
                cout << SubNames[1][temp-1];
                cout << " ";
            }
            break;
        case 2:
            cout << SubNames[0][temp-1] << " hundred ";
            break;
        case 0:
            divisor = pow(10, i + 1);
            temp1 = userInput / divisor % 10;

            if (temp1 != 1 && temp != 0) {
                cout << SubNames[0][temp-1];
                cout << " ";
            }
            break;
        default:
            break;
        }
        clen -= 1;

        if (clen >= 0 && cdig == 0) {
            cout << NumNames[clen] << ", ";
        }
    }*/


    // task 22
    
    
    /*int userInput = 0;
    cout << "Input number: ";
    cin >> userInput;

    vector<int> copy1 = { 1 }, copy2 = {};

    int check, temp1;
    int divisor, var, temp2, temp;

    for (int i = 0; i < userInput; i++) {
        copy2 = {};
        check = copy1[0];
        temp1 = check;
        temp2 = 0;
        for (int ch : copy1) {
            if (check == ch) {
                temp2 += 1;
            } else {
                copy2.push_back(temp1);
                copy2.push_back(temp2); // только числа 1, 2 и 3
                check = ch;
                temp1 = check;
                temp2 = 1;
            }
        }
        copy2.push_back(temp1);
        copy2.push_back(temp2);
        copy1 = copy2;

        //for (int ch = copy1.size() - 1; ch >= 0; ch--) {
        //    cout << copy1[ch];
        //}
        //cout << endl;

    }

    for (int ch = copy1.size() - 1; ch >= 0; ch--) {
        cout << copy1[ch];
    }
    cout << endl; */
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
