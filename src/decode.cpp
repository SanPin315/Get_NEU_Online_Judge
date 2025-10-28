#include <iostream>
#include <fstream>
using namespace std;
int main(int arg, char **args)
{

    string temp;
    fstream in("txt/waiting.txt");
    int i = 1;
    system("rm -r answer");
    system("mkdir answer");
    while (getline(in, temp))
    {
        temp = "echo " + temp + " | base64 --decode" + " > answer/output\\(" + (char)(i + '0') + "\\).txt";
        system(temp.data());
        i++;
    }
    return 0;
}
