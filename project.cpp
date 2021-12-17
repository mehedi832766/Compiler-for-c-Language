#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string espace(string s)
{
    string s1;
    int j = 0, i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            continue;
        }
        else
        {
            if (s[i + 1] == '=' && s[i] != ' ')
            {
                s1.push_back(s[i]);
                s1.push_back(' ');
            }
            else if (s[i] == '=' && s[i + 1] != ' ')
            {
                s1.push_back(s[i]);
                s1.push_back(' ');
            }
            else if (s[i + 1] == ';' && s[i] != ' ')
            {
                s1.push_back(s[i]);
                s1.push_back(' ');
            }
            else
            {
                s1.push_back(s[i]);
            }
        }
    }
    return s1;
}

string cmtout(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '/' && s[i + 1] == '/' && s[i + 2] == '/')
        {
            int k = 0, m = i - 1;
            while (s[i] != '\n')
            {
                k++, i++;
            }
            s.erase(m, k + 1);
            i = i - k;
        }
        else
        {
            continue;
        }
    }

    // cout<<s<<endl;
    return espace(s);
}

int valvar(string s)
{

    int f = 0,i;
    if (s == "auto" || s == "break" || s == "case" || s == "char" || s == "const" || s == "continue" || s == "default" || s == "do" || s == "double" || s == "else" || s == "enum" || s == "extern" || s == "float" || s == "for" || s == "goto" || s == "if" || s == "int" || s == "long" || s == "register" || s == "return" || s == "short" || s == "signed" || s == "sizeof" || s == "static" || s == "struct" || s == "switch" || s == "typedef" || s == "union" || s == "unsigned" || s == "void" || s == "volatile" || s == "while")
    {
        cout << s << " is invalid" << endl;
        return 1;
    }
    else if (s == "main()")
    {
        f = 0;
    }

    else if (s[0] >= 65 && s[0] <= 90 || s[0] >= 97 && s[0] <= 122 || s[0] == '_')
    {
        for ( i = 1; s[i] != '\0'; i++)
        {
            if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] == '_' || s[i] >= 48 && s[i] <= 57)
            {
                continue;
            }
            else
            {
                f++;
                break;
            }
        }
        if (f == 0)
        {
            // cout<<s<<" is valid"<<endl;
            return 0;
        }
        else
        {
            cout << s << " is invalid" << endl;
            s.erase(i,1);
            cout<<"suggestion: "<<s<<endl;
            return 1;
        }
    }
    else
    {
        cout << s << " is Invalid" << endl;
        char c;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] == '_')
            {
                c=s[i];
                break;
            }

        }
        char temp;
        temp=s[0];
        s[0]=c;
        s[i]=temp;
        cout<<"suggestion: "<<s<<endl;
        
        return 1;
    }
    return 0;
}

int valvar(string s)
{

    int f = 0,i;
    if (s == "auto" || s == "break" || s == "case" || s == "char" || s == "const" || s == "continue" || s == "default" || s == "do" || s == "double" || s == "else" || s == "enum" || s == "extern" || s == "float" || s == "for" || s == "goto" || s == "if" || s == "int" || s == "long" || s == "register" || s == "return" || s == "short" || s == "signed" || s == "sizeof" || s == "static" || s == "struct" || s == "switch" || s == "typedef" || s == "union" || s == "unsigned" || s == "void" || s == "volatile" || s == "while")
    {
        cout << s << " is invalid" << endl;
        return 1;
    }
    else if (s == "main()")
    {
        f = 0;
    }

    else if (s[0] >= 65 && s[0] <= 90 || s[0] >= 97 && s[0] <= 122 || s[0] == '_')
    {
        for ( i = 1; s[i] != '\0'; i++)
        {
            if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] == '_' || s[i] >= 48 && s[i] <= 57)
            {
                continue;
            }
            else
            {
                f++;
                break;
            }
        }
        if (f == 0)
        {
            // cout<<s<<" is valid"<<endl;
            return 0;
        }
        else
        {
            cout << s << " is invalid" << endl;
            s.erase(i,1);
            cout<<"suggestion: "<<s<<endl;
            return 1;
        }
    }
    else
    {
        cout << s << " is Invalid" << endl;
        char c;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] == '_')
            {
                c=s[i];
                break;
            }

        }
        char temp;
        temp=s[0];
        s[0]=c;
        s[i]=temp;
        cout<<"suggestion: "<<s<<endl;
        
        return 1;
    }
    return 0;
}

int line(string s,string ws){
    int i,f,l=0;
    for ( i = 0; i < ws.length(); i++)
    {
        string ts;
        while (ws[i]!='\n')
        {
            ts.push_back(ws[i]);
            // cout<<s[i]<<endl;
            i++;
        }
        l++;
        // cout<<ts<<endl;
        stringstream ss(ts);
        string word;
        while (ss>>word)
        {
            if(word==s){
                f=1;
                break;
            }
        }
        if(f==1){
            break;
        }
        
        
    }
    return l;
}
int parser(string s)
{

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if (word == "int" || word == "string" || word == "char" || word == "float")
        {
            ss >> word;
            if (valvar(word) == 1)
            {
                cout<<"error in line "<<line(word,s)<<endl;
                return 1;
            }
        }
    }
    return 0;
}




int main()
{
    string s;
    getline(cin, s, '`');
    
    // s = cmtout(s);

    if (parser(s) == 1)
    {
        cout << "error" << endl;
    }
    else
    {
        cout << s << endl;
    }
}