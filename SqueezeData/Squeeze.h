#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Squeeze
{
public:
    void replace(string s)
    {
        int length = s.length();

        for (auto i = s.begin(); i < s.end(); i++)
        {
                        
            if (s[i] == s[i + 1])
            {
                s.erase(i + 1);
                
            }

        }
        cout << s << endl;
    }

};

