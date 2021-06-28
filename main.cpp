#include <iostream>
using namespace std;
//1.- diseñe la funcion que calcule el cubo de un numero
int cub (int num)
{
    return(num*num*num);
}
int main() {
    int a;
    cout<<"Ingrese el un numero para saber cuanto es al cubo"<<endl;
    cin>>a;
    cout<<cub(a);

    return 0;
}