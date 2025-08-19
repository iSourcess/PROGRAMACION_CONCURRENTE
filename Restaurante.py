import threading
import time
import random



def cock(clientes):
    
menu{pizza,pozole,tacos,longanisa}
acciones{picar,sazonar,cocinar,sal,juntar}
clientes{Pablito,clavo,un,clavito,}

for i in range (3):
    print(f"Pedido de:{clientes(i)} - paso {i}")
    time.sleep(1)
        
        
hilo1 = threading.Thread(target=cock args=clientes1)
hilo2 = threading.Thread(target=cock args=clientes2)
hilo3 = threading.Thread(target=cock args=clientes3)
hilo4 = threading.Thread(target=cock args=clientes4)
hilo5 = threading.Thread(target=cock args=clientes5)