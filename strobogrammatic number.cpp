#include <bits/stdc++.h> 

bool isStrobogrammatic(string &n) {
    if (n.length() == 1) {
        if (n[0] == '1' || n[0] == '0' || n[0] == '8') {
            return true;
        } else {
            return false;
        }
    }
    int k = n.length() / 2;
    int j = n.length() - 1;
    for (int i = 0; i <= k; i++) {
       if (!((n[i] == '0' && n[j] == '0') || 
             (n[i] == '1' && n[j] == '1') || 
             (n[i] == '8' && n[j] == '8') || 
             (n[i] == '6' && n[j] == '9') || 
             (n[i] == '9' && n[j] == '6'))) {
           return false;
       }
       j--;
    }
    return true;
}
