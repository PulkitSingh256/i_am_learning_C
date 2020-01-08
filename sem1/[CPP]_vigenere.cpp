#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

//Usage: ./vigenere [-e/-d] <key> <message>

void encrypt(char *, char *);
void decrypt(char *, char *);

int main(int argc, char *argv[])
{
	if(argc<4)
	{
		cout<<"Usage: ./vigenere [-e/-d] <key> <message>"<<endl;
		return 1;
	}	
	if(strncmp(argv[1],"-e",2)==0)
	{
		encrypt(argv[2],argv[3]);
	}
	else if(strncmp(argv[1],"-d",2)==0)
	{
		decrypt(argv[2],argv[3]);
	}
	else
	{
		cout<<"Usage: ./vigenere [-e/-d] <key> <message>"<<endl;
	}

}
//==============================================================================================
void encrypt(char *key, char *msg)
{
	int lenmsg = strlen(msg);
	int lenkey = strlen(key);
	char ciphertext[lenmsg+1];
	for(int i = 0; i < strlen(key); i++)
	{
		if(isupper(key[i]))
		{
			key[i] = tolower(key[i]);
		}
	}
	for(int i=0, j=0 ; i < lenmsg; i++)
	{
		if(isalpha(msg[i]))
		{
			 
			if(isupper(msg[i]))
			{
				
				ciphertext[i] = (((msg[i] - 'A') + (toupper(key[j++ % lenkey])-'A')) % 26) + 'A';
			}
			else 
			{
				ciphertext[i] = (((msg[i] - 'a') + (key[j++ % lenkey]-'a')) % 26) + 'a';
			}

		}
		else
		{
			ciphertext[i] = msg[i];
		}
	}
	ciphertext[lenmsg] = '\0';
	cout<<"ciphertext: "<<ciphertext<<endl;
}

void decrypt(char *key, char *cipher)
{
	int lencipher = strlen(cipher);
	int lenkey = strlen(key);
	char plaintext[lencipher+1];
	for(int i = 0; i < strlen(key); i++)
	{
		if(isupper(key[i]))
		{
			key[i] = tolower(key[i]);
		}
	}
	for(int i=0, j=0 ; i < lencipher; i++)
	{
		if(isalpha(cipher[i]))
		{
			 
			if(isupper(cipher[i]))
			{
				
				plaintext[i] = (((cipher[i] - 'A') - (toupper(key[j++ % lenkey])-'A')+26) % 26) + 'A';
			}
			else 
			{
				plaintext[i] = (((cipher[i] - 'a') - (key[j++ % lenkey]-'a')+26) % 26) + 'a';
			}

		}
		else
		{
			plaintext[i] = cipher[i];
		}
	}
	plaintext[lencipher] = '\0';
	cout<<"plaitnext: "<<plaintext<<endl;
}
