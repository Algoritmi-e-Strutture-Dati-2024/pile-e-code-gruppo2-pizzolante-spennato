#include<iostream>
 template <typename T>
 class CodaVettore{
 	private:
 		T elementi [100];	
 		int lung;
 		int start;
 		int end;
 		
 	public:
 		CodaVettore(){
 			lung=0;		//lunghezza degli elementi
 			start=0;	//inzio della coda
 			end=0;		//fine della coda
		 };
	
	//Aggiunge 
	void enqueue(T elem){
		if(lung<100){
			elementi[end]=elem;
			end=(end+1)%100;
			lung++;
		}
		else{
		std::cout<<"La coda è piena."<<std::endl;	
		}
	}
	
	//Rimuove
	void dequeue(){
		if(lung>0){
			int a;
			a=elementi[start];
			start=(start+1)%100;
			lung--;
			return a;
		}
		else{
			std::cout<<"La coda è vuota."<<std::endl;
		}
	}
	
	//Legge lo start
	void front()
	if(lung>0){
		return elementi[start];
	}
	else{
		std::cout<<"La coda è vuota."<<std::endl;
	}
	
	//restituire true se la coda è vuota false altrimenti
	void isEmpty(){
		if(lung==0){
			return true;
		}
		else{
			return false;
		}
	}
	
	//cardinalità della coda
		void size(){
			if(lung>0){
			return lung;
			}
			
			else{
				std::cout<<"Lista vuota."<<std::endl;
			}
		}
	
	};
