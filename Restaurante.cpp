#include <iostream> 
using namespace std;
#include <thread>
#include <cstdlib>
#include <ctime>
#include <chrono>

void cocinar(string accion, string cliente, string comida, int id) {
    cout << "Esclavo " << id << ": " << accion << " " << comida
         << " para " << cliente << endl;
}

void pedido (int contador) 
{
    if (contador == 4)
    {
       return;
    }
    
    string menu[] = {"Pizza", "Sopes", "Enchiladas", "Waffles"};
    string Acciones[] = {"Cortar", "Picar", "Sazonar", "Hornear", "Juntar"};
    string clientes[] = {"Luis", "Alexis", "Chuyito", "Efra", "Omar"};


    int random1 = rand() % 5; 
    int random2 = rand() % 4;
    string Cliente_al = clientes[random1];
    string Comida_al = menu[random2];
 

    cout<<"El cliente " << Cliente_al << " Pidio "<< Comida_al<<endl;


    thread t1(cocinar, Acciones[0], Cliente_al, Comida_al, 1);
    thread t2(cocinar, Acciones[1], Cliente_al, Comida_al, 2);
    thread t3(cocinar, Acciones[2], Cliente_al, Comida_al, 3);
    thread t4(cocinar, Acciones[3], Cliente_al, Comida_al, 4);
    thread t5(cocinar, Acciones[4], Cliente_al, Comida_al, 5);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();

    cout<<"Preparando pai..."<<endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(5000));   

    cout<<"Sale pedido de " << Cliente_al << endl<<endl<<endl<<endl;

    pedido (contador+1);

    // string Acciones_al = Acciones[random];

}

int main ()
{  
    int i = 0;
    srand(time(0)); 
    pedido(i);
    
}
