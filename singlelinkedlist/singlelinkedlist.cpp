#include <iostream>
using namespace std;

struct Node{
	int noMhs;
	string name;
	Node* next;
};

Node* start = null;

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();

	cout << "Masukan Nim  : ";
	cin >> nim;
	cout << "Masukan nama : ";
	cin >> nama;

	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;
}

int main(){

}