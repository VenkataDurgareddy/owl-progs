//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

#include <string>
#include <cstdlib>

using namespace std;

class Solution {
public:
    string compareFrac(string str) {
        // Variables to store parts of the fractions
        string a = "", b = "", c = "", d = "";
        int n = str.length();
        int i = 0;

        // Parsing the first numerator
        while (i < n && str[i] != '/') {
            a += str[i];
            i++;
        }
        i++; // Skip the '/'
        
        // Parsing the first denominator
        while (i < n && str[i] != ',') {
            b += str[i];
            i++;
        }
        i++; // Skip the ','

        // Skip the space after the comma
        while (i < n && str[i] == ' ') {
            i++;
        }

        // Parsing the second numerator
        while (i < n && str[i] != '/') {
            c += str[i];
            i++;
        }
        i++; // Skip the '/'
        
        // Parsing the second denominator
        while (i < n) {
            d += str[i];
            i++;
        }

        // Converting strings to floats
        float num1 = stof(a) / stof(b);
        float num2 = stof(c) / stof(d);

        // Comparing the fractions
        if (num1 > num2) {
            return a + '/' + b;
        } else if (num1 < num2) {
            return c + '/' + d;
        } else {
            return "equal";
        }
    }
};



//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends