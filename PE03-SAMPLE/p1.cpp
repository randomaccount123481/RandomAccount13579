#include <string>
using namespace std;
/**
 *  @file p1.cpp
 *
 *  CS 150 PE03: SIMPLE STRINGS/LOOPS
 *
 *  Given a string and an int n, create a new string 
 *  made of the first n characters of the original 
 *  string, followed by the first n-1 characters of 
 *  the original string, and so on. You may assume 
 *  that n is between 0 and the length of the string, 
 *  inclusive (i.e. n >= 0 and n <= str.length())
 * 
 *  Some examples:
 *      "Chocolate", 4 -> "ChocChoChC"
 *      "Chocolate", 3 -> "ChoChC"
 *      "Ice Cream", 2 -> "IcI"  
 */
string decreasing(const string& str, int n)
{
    string result{"not done"};
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            result += str[j];
        }
    }    
    return result;
}
////////////////// STUDENT TESTS ///////////////////////
#include <iostream>
using namespace std;
void studentTests()
{
    cout << "Add your own code here" << endl;
}

