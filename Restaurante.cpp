#include <iostream> 
using namespace std;
#include <thread>
#include <cstdlib>
#include <ctime>


void pedido () 
{
    string menu[] = {"Pizza", "Sopes", "Enchiladas", "Waffles"};
    string Acciones[] = {"Cortar", "Picar", "Sazonar", "Hornear", "Juntar"};
    string clientes[] = {"Luis", "Alexis", "Chuyito", "Efra", "Omar"};


    int random1 = rand() % 5; 
    int random2 = rand() % 4;
    string Cliente_al = clientes[random1];
    string Comida_al = menu[random2];
 

    cout<<"El cliente " << Cliente_al << " Pidio "<< Comida_al<<endl;


    // string Acciones_al = Acciones[random];

}

int main ()
{  
    srand(time(0)); 
    pedido();
    
}
