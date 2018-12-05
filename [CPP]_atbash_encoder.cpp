//This Is English Implementation of Hebrew Atbash cipher

#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

#define alphabet "abcdefghijklmnopqrstuvwxyz"

void encrypt(char *);

/*

Usage: ./atbash <message>

run atbash again on cipher to decrypt it

Atbash Example:

plaintext: This is Atbash
ciphertext: GSrh rh Zgyzhs
*/


int main(int argc, char *argv[])
{
	if(argc<2)
	{
		cout<<"Usage: ./atbash <message>"<<endl;
		return 1;
	}	
	encrypt(argv[1]);
}


void encrypt(char *msg)
{
	int lenmsg = strlen(msg),i;
	char ciphertext[lenmsg+1];
	for(i = 0 ; i < lenmsg ; i++)
	{
		if(isalpha(msg[i]))
		{
			if(isupper(msg[i]))
			{
				ciphertext[i] = toupper(alphabet[25-(tolower(msg[i])-'a')]);
			}
			else 
			{
				ciphertext[i] = alphabet[25-(msg[i]-'a')];
			}
		}
		else
		{
			ciphertext[i] = msg[i];
		}
	}
	ciphertext[i] = '\0';
	cout<<"ciphertext: "<<ciphertext<<endl;
}
