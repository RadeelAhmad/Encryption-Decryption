#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string word = "",s;
	int temp, y=0;
	string n,first_word;
	cout<<"Enter cypher text"<<endl;
	getline (cin,n);
	cout<<"enter first word of your text:"<<endl;
	cin>>s;
	//first word encryption
	string decrypted_string="";
	int key=0;
	for(int i=-1 ; i>=-9 ; i--)
	{
		decrypted_string="";
		int todecrement=i;
		for(int i=0;i<s.size();i++)
		{
			int c=s[i];
				if(c>=65 && c<=90)
				{		
					c=c+todecrement;
					if( c > 90 )
					{ 
						c=c-26;
					}
						
				}
				
				char out_char=c;
				//char add not plus	
				decrypted_string+=out_char;	
			
		}
		//file handling
			fstream fs;
        	fs.open("dictionary.txt",ios::in);
        	string word;
        	
		while(fs>>word)
		{
			if(word==decrypted_string)
			{
			key=i;
			break;
			}
			
		}
		
   }
	cout<<"KEY WILL BE: "<< key;
	
	temp=key;
	cout<<"\nNow setence will be:"<<endl;
		for(int i=0 ; i<n.size() ; i++){
		//convert alphabet in acsii number
		int x=int(n[i]);
		//for space
		if (x==32)
		{			
			temp = temp-2;
			cout<<" ";
			i++;
			//to skip space and go to next word
			x=int(n[i]);
		}	
	//for large alphabet
	if (x>=65 && x<=90 )
	{
		x=x+temp;
	//if VALUE IS LESS THEN A
		if(x<65)
		{
		x=x+26;
		}
	
	}
	//to convert the number in alphabet
	char ch=char(x);
	cout<<ch;
	}
	return 0;
}
