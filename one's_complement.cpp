#include <iostream>

#include <string>

using namespace std;

class binary
{
    private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display1(void);
    void display2(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }

    }

}

void binary ::display1(void)
{
    cout<<"Displing your binary number :";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

void binary ::display2(void)
{
    cout<<"Displing your one's complement- : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display1();
    b.ones_complement();

    b.display2();
    return 0;
}
