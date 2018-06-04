#include<iostream>
#include<cstring>

int main(){
	using namespace std;
	cout<<"\tenter words end with \"done\":\n\t";
	int count=0;
	char word[15];
	cin>>word;
	while (strcmp(word,"done")){
		count++;
		cin>>word;
	}
	cout<<"\tthere are "<<count<<"words.";
	return 0;
	
}
