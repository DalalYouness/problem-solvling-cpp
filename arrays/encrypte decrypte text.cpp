#include <iostream>
#include <string>
using namespace std;



string ReadName()
{
    string text;

    cout << "Please enter your Name?" << endl;
    getline (cin,text);

    return text;

   
}


string EncryptText(string Text, short KeyEncryption)
{

    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + KeyEncryption);
    }

    return Text;
}



string DecryptText(string Text, short KeyEncryption)
{

    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - KeyEncryption);
    }

    return Text;
}


int main()
{
   
    const short KeyEncryption = 2;

    string Text = ReadName();
    string TextAfterEncrypt = EncryptText(Text, KeyEncryption);
    string TextAfterDecryption = DecryptText(TextAfterEncrypt, KeyEncryption);

    cout << "\nText before encryption : " << Text << endl;
    cout << "\nText after encryption : " << TextAfterEncrypt << endl;
    cout << "\nText after decryption : " << TextAfterDecryption << endl;
}