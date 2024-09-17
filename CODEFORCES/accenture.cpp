#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    char ch = s[0];
    bool flag = isupper(ch);  // flag=true for uppercase, false for lowercase
    string temp = "";
    int j = 0;
    while(flag==false and j<s.size()){
        temp.push_back(toupper(s[j]));
        j++;
        if (j<s.size() && isupper(s[j])) flag = true;
    }
    cout<<temp<<endl;
    temp = "";
    for (int i = j; i < s.size(); i++) {
        if (flag == true) {
            temp.push_back(tolower(s[i]));
            flag = false;
            i++;
            while (i < s.size() and flag==false) {
                temp.push_back(toupper(s[i]));
                i++;
                if (i < s.size() && isupper(s[i])) {
                    flag = true;
                    i--;
                }
            }
            cout<<temp<<endl;
            temp = "";
        }
    }
    return 0;
}
//saveChangesInTheEditor