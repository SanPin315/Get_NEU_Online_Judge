#include <iostream>
#include <fstream>
using namespace std;
int main(int arg, char **args)
{
    if (arg != 2)
    {
        return 1;
    }
    fstream f(args[1]);
    fstream o("txt/waiting.txt");
    string temp;
    bool flag = false;
    char output[] = "\"output_run";
    while (getline(f, temp))
    {
        flag = false;
        for (int i = 0; i < 11; i++)
        {
            if (temp[i] != output[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        o << &temp[14] << endl;
    }
    o.close();

    return 0;
}