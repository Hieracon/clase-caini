#include "clase_caini.h"

using namespace std;

int main()
{
    int verf;
    cout << "If the dog has spots then press 1.\nOtherwise press 2.\n";
    cin >> verf;
    if(verf == 1){
        CaineCuPete obj;
        obj.get_details();
        obj.spots();
        obj.display();
    }
    else{
        CaineFaraPete obj_2;
        obj_2.get_details();
        obj_2.display();
    }
}
