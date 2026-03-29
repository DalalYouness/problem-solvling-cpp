#include <iostream>
#include <string>
using namespace std;



string ReadPassWord(string message)
{
    string Password;

    do {

        cout << message << endl;
        cin >> Password;

    } while (Password.length() != 3);

    return Password;
}


string GuessPassword(string Password)
{
    string Word = "";
    int l = 1;

    for (int i = 65  ; i <= 90 ; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {

                
               
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);

                cout << "Trial[" << l << "]: " << Word << endl;
                
                

                if (Word == Password)
                {
                    return "\nPassword is " + Word + "\n" + "Found after " + to_string(l) + " Trial(s)";
                    
                    
                }

                l++;
                Word = "";
                
            }
            
            
        }

      
    }
}


int main()
{
    cout << PrintWordsFromAAAtoZZZ(ReadPassWord("Please enter your password with Capitale Letters?"));
    system("pause>0");
}