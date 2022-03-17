#include <iostream>
#include <string>
using namespace std;

bool IsVailidString(string str,int n)
{
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || (str[0] == '_')))//First character must be underscore or latters
        return false;

    for (int i = 0; i<str.length(); i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '_') || (str[i] >= '0' && str[i] <= 9)))
            return false;//If the string contains other than the latters or number or underscors then its not a vailid string 
    }

    return true;
}

int main()
{
    string str = "_ajaysinghadiya";
    int n;
    n=str.length();
    if (IsVailidString(str,n))
        cout << "The given string is a vailid string" << endl;
    else
        cout << "The given string is a invailid string" << endl;

    return 0;
}
