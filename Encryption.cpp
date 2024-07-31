#include<iostream>
using namespace std;
int main(){
	int temp;
	string n;
	cout<<"Enter alphabet"<<endl;
	getline (cin,n);
	cout<<"Enter last number of your ID"<<endl;
	cin>>temp;
	cout<<"cypher text will be"<<endl;
	for(int i=0 ; i<n.size() ; i++){
		//convert alphabet in acsii number
		int x=int(n[i]);
		//for space
		if (x==32)
		{			
			temp = temp+2;
			cout<<" ";
			i++;
			//to skip space and go to next word
			x=int(n[i]);
		}
	//for small alphabet	
	if (x>=97 && x<=122 )
	{
		x=x+temp;
	//if alphabed is z 
		if (x > 122)
		{
			x=x-26;
		}

	}
	//for large alphabet
	else
	{
		x=x+temp;
	//if alpabet is Z
		if(x>90)
		{
		x=x-26;
		}
	
	}
	//to convert the number in alphabet
	char ch=char(x);
	cout<<ch;
	}
	return 0;	
}
		
	
	
