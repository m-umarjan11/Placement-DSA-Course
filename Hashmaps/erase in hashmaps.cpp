#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
	unordered_map<string,int> m;
	pair<string,int> p = make_pair("umar",2000);
	pair<string,int> a = make_pair("jan",2100);pair<string,int> b = make_pair("hilal",2020);
	pair<string,int> c = make_pair("muhsin",2060);pair<string,int> d = make_pair("toosef",2070);
	m.insert(p);
	m.insert(a);
	m.insert(b);
	m.insert(c);
	m.insert(d);
	m["Asad"] =1900;
	cout<<m["umar"]<<endl;
	cout<<m.size()<<endl;
	cout<<m.count("Awais")<<endl;
	cout<<m.count("umar")<<endl;
	m.erase("jan");
	cout<<m.size()<<endl;
	
	unordered_map<string,int> :: iterator it = m.begin();
	while(it!=m.end()){
		cout<<it->first << " "<<it->second<<endl;
		it++;
	}
	
}