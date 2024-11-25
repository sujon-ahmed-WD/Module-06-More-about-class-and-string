#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "hello";
    // --------------------1---------------------------------
    //  string s("Hello _Ahmad"); // vlaue Asigen kora deva .......
    //---------------------2---------------------------------
    string s("Hello World",4); // Resize kora desaa ........... 4 ta rhikya bakigolo delete korsa ..
    cout<<s<<endl;
    //-------------------- 3---------------------------------
    string s1 = "Hello world"; // 4 ta delete kora baki golo Probide koesa
    string t(s1, 4);

    cout << t << endl;
    return 0;
}