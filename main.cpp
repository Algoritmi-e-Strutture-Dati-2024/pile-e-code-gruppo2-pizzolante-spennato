#include <iostraeam>
#include <pila.cpp>
#include<coda.cpp>
{
PilaVettore<int> Pila;

Pila.push(10);
Pila.push(20);

std::cout<<"Elemento in cima: "<<Pila.top()<<std::endl;

Pila.pop();
std::cout<<"L'elemento in cima dopo la funzione pop: "<<Pila.top()<<std::endl;

std::cout<<"La lista è vuota: "<<Pila.isEmpty();<<std::endl;

std::cout<<"La cardinalità è: "Pila.size();<<std::endl;

CodaVettore <int> Coda;

Coda.enqueue(10);
Coda.enqueue(20);

std::cout<<"Elemento in cima: "<<Coda.front<<std::endl;

Coda.dequeue();
std::cout<<"L'elemento in coda dopo la funzione dequeue: "<<Coda.front()<<std::endl;

std::cout<<"La lista è vuota: "<<Coda.isEmpty();<<std::endl;

std::cout<<"La cardinalità è: "<<Coda.size();<<std::endl;

};
