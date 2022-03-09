#include <iostream>
#include "Book.h"
using namespace std; 
#include "Journal.h"

Journal::Journal():Book(){
	
}

Journal::Journal(string t, string a,int no,int vol):Book(t,a,no){
 volume = vol;
}

void Journal::print(){
	cout << "Book details:"<< endl;
	cout << "Title:" << title << "by:" << author << endl;
	cout << "CallNo:" << callNo << endl;
}