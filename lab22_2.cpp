#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	//Write your code here
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	loc = find(line_up.begin(),line_up.end(),"Luffy");
	loc++;
	line_up.pop_front();
	line_up.pop_front();
	line_up.insert(loc,"Narutu");
	line_up.push_front("Prayath");
	loc = find(line_up.begin(),line_up.end(),"Prayath");
	loc++;
	line_up.insert(loc,"Tony");
	loc = find(line_up.begin(),line_up.end(),"bob");
	for(int i=0;i<4;i++){
		line_up.pop_front();
	}

	printList(line_up);
		
	return 0;
}