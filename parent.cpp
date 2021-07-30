#include <iostream>
#include <fstream>

using namespace std;

int main(){
	long n;
	cin>>n;
	ofstream fout;
	fout.open("checkEven.js",ios::trunc);
	fout<< "function isEven(n){\n";
	fout << "\tif(n === 0)\n\t\treturn true;\t\n";
	for(int i=1;i<=n;i++){
		fout << "\telse if(n === "<<i<<")\n";
		if(i%2==0){
			fout << "\t\treturn true;\n"; 
		}else{
			fout << "\t\treturn false;\n";
		}
	}
	fout<<"}";
	return 0;
}
