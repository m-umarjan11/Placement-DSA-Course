#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
	unordered_map<string,int> m;
	pair<string,int> p = make_pair("umar",2000);
	m.insert(p);
	m["Asad"] =1900;
	cout<<m["umar"]<<endl;
	cout<<m.at("Asad");
}