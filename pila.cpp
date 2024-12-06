#include<iostream>
 template <typename T>
 class PilaVettore{
 	private:
 		T elementi [100];	
 		int lung;
 		
 	public:
 		PilaVettore(){
 			lung=0;
		 };
		 
		 //Aggiungi un elemento alla pila 
		 void push(T elem){
		 	if(lung<100){
		 	elementi[lung] = elem;
		 	lung++;
			 }
			 else{
			 	std::cout<<"Lista piena."<<std::endl;
			 }
		 }
		 
		//rimuove elemento 
		 void pop(){
		 	if(lung>0){
		 		int a;
		 		a=elementi[lung];
		 		
		 		lung--;
		 		return a;
			 }
			 else{
			 	std::cout<<"Lista vuota."<<std::endl;
			 }
		 }
		 
		 //legge la testa dalla pila 
		 void top(){
		 	if(lung>0){
		 		return elementi[lung];
				
			 }
			else{
				std::cout<<"Lista vuota."<<std::endl;
			}
		 }
		 
		//restituisce true se la pila è vuota false altrimenti
		void isEmpty(){
			if(lung==0){
				return true;
			}
			else{
				return false;
			}
		}
		
		//restituisce il numero degli elementi della pila (cardinalità)
		void size(){
			if(lung>0){
				return lung;
			}
			
			else{
				std::cout<<"Lista vuota."<<std::endl;
			}
		}
		 
 };
