#include<bits/stdc++.h>
using namespace std;

// Good Solution 

bool isLongPressedName(string name, string typed) {
        int n = name.size(), m = typed.size();
        if (n > m) return false;
        int i = 0, j = 0;
        while (i < n || j < m) {
            if (i < n && typed[j] == name[i]) i++, j++;
            else if (i > 0 && typed[j] == name[i - 1]) j++;
            else break;
        }
        if (i == n && j == m) return true;
        return false;
    }

// Fantastic Soln 2
public boolean isLongPressedName(String name, String typed) {
        int i = 0, m = name.length(), n = typed.length();
        for (int j = 0; j < n; ++j)
            if (i < m && name.charAt(i) == typed.charAt(j))
                ++i;
            else if (j == 0 || typed.charAt(j) != typed.charAt(j - 1))
                return false;
        return i == m;
    }


// Good Solution
 bool isLongPressedName(string name, string typed) {
        vector<pair<char, int>> press1, press2;
        for (char ch: name) {
            if (press1.size() == 0 || press1.back().first != ch)
                press1.emplace_back(ch, 1);
            else
                press1.back().second++;
        }
        for (char ch: typed) {
            if (press2.size() == 0 || press2.back().first != ch)
                press2.emplace_back(ch, 1);
            else
                press2.back().second++;
        }
        if (press1.size() != press2.size()) return false;
        for (int i = 0; i < press1.size(); i++)
            if (press1[i] > press2[i])
                return false;
        return true;
    }


// Good Solution 
    public boolean isLongPressedName(String name, String typed) {
    int i = 0, j = 0;
    while(i < name.length() && j < typed.length()) {
        if(name.charAt(i) == typed.charAt(j)) {
            i++;
            j++;
        }
        else {
            if(j == 0 || typed.charAt(j) != typed.charAt(j-1)) return false;
            j++;                                
        }
    }
    if(i != name.length()) return false;
    // taking care for the case where we have name : abc and typed abccccccccc
    while(j < typed.length()) {
        if(typed.charAt(j) != typed.charAt(j-1)) return false;
        j++;
    }
    return true;
}
 
 
int main()
{
    
 
 
 
    return 0;
}