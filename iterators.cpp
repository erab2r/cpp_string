
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    getline(cin, s);
    // for(int i =0;i<s.size();i++){
    //       cout << s[i] << endl;
    // }
     for (string::iterator it = s.begin(); it != s.end(); ++it){
          cout << *it << endl;
     }

    

    return 0;
}