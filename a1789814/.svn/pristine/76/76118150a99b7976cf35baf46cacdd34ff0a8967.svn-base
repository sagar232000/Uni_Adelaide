#include <iostream>
#include "Book.h"
using namespace std; 	
Book::Book(){
	title = "empty";
	author = "empty";
	callNo = 0;
}

Book::Book(string t, string a,int no){
 title = t;
 author = a;
 callNo = no;
}

void Book::print(){
	cout << "Book details:"<< endl;
	cout << "Title:" << title << "by:" << author << endl;
	cout << "CallNo:" << callNo << endl;
}

bool Book::equals(Book& b1,Book& b2){

	if(b1.title == b2.title){
		if(b1.author == b2.author)
		{
			return 1;
		}
		else{
			return 0;
		}
	} 
	else{
			return 0;
		}

}