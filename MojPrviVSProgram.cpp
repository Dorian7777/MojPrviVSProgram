#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("imenik-tekstualna.txt",ios::in);
    string ucenik;
    while(getline(file,ucenik))
        cout<<ucenik<<endl;
    file.close();
    string noviUcenik;
    getline(cin,noviUcenik);
    file.open("imenik-tekstualna.txt",ios::out | ios::app);
    file<<noviUcenik<<endl;
    file.close();
    return 0;

}
