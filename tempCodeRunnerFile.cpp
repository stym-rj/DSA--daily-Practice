#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string s_hr = "", s_min="", s_sec="", mer="";
    for(int i=0;i<2; i++)   s_hr+=s[i];
    for(int i=3;i<5; i++)   s_min+=s[i];
    for(int i=6;i<8; i++)   s_sec+=s[i];
    for(int i=8;i<10; i++)   mer+=s[i];
    int hr= stoi(s_hr);
    int min= stoi(s_min);
    int sec= stoi(s_sec);
    
    if(mer=="AM"){
        if(hr==12){
            s[0]='0';
            s[1]='0';
        }
        string ans="";
        for(int i=0; i<8; i++){
            ans+=s[i];
        }
        return ans;
    }
    else{
        string ans="";
        if(hr==12){
            for(int i=0; i<8; i++){
                ans+=s[i];
            }
            return ans;
        }
        ans= to_string(hr+12);
        for(int i=2; i<8; i++){
            ans+=s[i];
        }
        return ans;
    }
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";


    return 0;
}
