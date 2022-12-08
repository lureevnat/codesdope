/*
Problem:
Check the occurrence of the letter 'e' and the word 'is' in the sentence "This is umbrella" without using predefined functions.
*/

#include <iostream>
using namespace std;

int main()
{
    string str = "This is umbrella";
    int e = 0;
    int is = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'e')
            e++;
        if (i > 0 && str[i] == 's' && str[i - 1] == 'i')
            is++;
    }
    cout << "e has occured " << e << " times" << endl;
    cout << "is has occured " << is << " times" << endl;
    return 0;
}