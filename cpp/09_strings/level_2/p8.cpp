/*
Problem:
Write down the names of 10 of your friends in an array and then sort those in alphabetically ascending order.
*/

#include <iostream>
using namespace std;

int main()
{
    string str[10] = {"bob", "bon", "cat", "alice", "alive", "cen", "dat", "den", "eat", "eaf"};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            int min_length = (str[i].length() < str[j].length() ? str[i].length() : str[j].length());
            bool flag = false;
            for (int k = 0; k < min_length; k++)
            {
                if (str[i][k] < str[j][k])
                {
                    break;
                }
                else if (str[i][k] > str[j][k])
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
            {
                string temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        cout << str[i] << endl;
    return 0;
}