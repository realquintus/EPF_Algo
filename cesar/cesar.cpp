#include <iostream>
#include <string>
int ord(char str)
{
   return int(str);
}

int main(){
	std::string sentence;
	std::string cipher;
	char character;
	int key,ord_char;	
	getline(std::cin,sentence);
	std::cin>>key;
	for (int i=0;i<sentence.length();i++){
		ord_char=ord(sentence.at(i))+key%26;
		if (ord(sentence.at(i)) == 32){
			character=char(32);
		}
		else if (ord_char > 122){
			character=char(97+(ord_char-122));
		}
		else{
			character=char(ord_char);
		}
		cipher+=character;
	}
	std::cout << cipher << std::endl;
}
