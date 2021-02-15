#include <iostream>
#include <fstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class strings
{
	public:
		string s;
		string s1;
		string s2;
		
		ifstream file;
 		ofstream fileOut;
		
		strings();
		~strings();
		
		void wypisz();
		
	private:
		void dwucykliczny(string s);
		void dwieJedynki(string s);
		
};

strings::strings() {
	file.open("c:\ciagi (2).txt");
 	fileOut.open("wyjscie.txt");
}

void strings::dwucykliczny(string s) {
	        
	    s1 = s.substr(0, s.length() / 2);
	    s2 = s.substr(s.length() / 2, s.length());
	        
	    if (s1 == s2) {
	        fileOut<<"Dwucykliczny: "<<s<<endl;
		}
}

void strings::dwieJedynki(string s) {  
		
		for (int i=0; i<s.length()-1; i++) {
			if (s[i]=='1' && s[i+1]=='1') {
				fileOut<<"dwieJedynki: "<<s<<endl;
				break;
			};
		}

}

void strings::wypisz() {
	while(!file.eof()){
		file>>s;
		
		this->dwieJedynki(s);
		this->dwucykliczny(s);
	}
}

strings::~strings() {
	file.open("c:\ciagi (2).txt");
 	fileOut.open("wyjscie.txt");
}

int main(int argc, char** argv) {
	strings ciag;
	ciag.wypisz();
	return 0;
}
