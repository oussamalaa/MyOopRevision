#include <iostream>
#include <list>
#include <string>
using namespace std;
class Mychanel
{
public:
    string Name;
    string OwnedBy;
    int subsscriberCount;
    list<string> published;

    Mychanel(string name, string ownedBy)
    {
        Name = name;
        OwnedBy = ownedBy;
        subsscriberCount = 0;
    }
    void getInfo()
    {
        cout << "name is      : " << Name << endl;
        cout << "owner is     : " << OwnedBy << endl;
        cout << "subsccriber :" << subsscriberCount << endl;
        cout << "published   :";
        for (string videotitles : published)
        {
            cout << videotitles << endl;
        }
    }
};
int main()
{
    Mychanel mychanel1("oussama", "Laacisse\n");
    cout << mychanel1.Name << endl;
    cout << mychanel1.OwnedBy << endl;

    return 0;
}
