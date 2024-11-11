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
//input => saveChangesInTheEditor
//output => SAVE
//          cHANGES
//          iN
//          tHE
//          eDITOR
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    vector<string> words;// we will first differentiate all words 
    string current = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            if (!current.empty()) {
                words.push_back(current);// if something is already present push it first in vector for eg we initally had "save" so before moving ahead we have to push it then start to form the next word
            }
            current = s[i];//if already empty then we start with the capital letter at first 
        } else {
           
            current += s[i];//if its small case then directly keep pushing it initally till first capital letter is occured otherwise from the next case when we finally encounter a capital letter then we first push the capital letter as done above then we use this statement to push the next small letters
        }
    }
    if (!current.empty()) {//push the collected string till now into the vector 
        words.push_back(current);
    }
    for (int i = 0; i < words.size(); i++){
        string res = "";
        for (int j = 0; j < words[i].size();j++){
            if(isupper(words[i][j]))
                res += tolower(words[i][j]);
            else
                res += toupper(words[i][j]);
        }
        cout << res << endl;
    }
}