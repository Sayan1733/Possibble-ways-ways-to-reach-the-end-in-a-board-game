#include<iostream>
using namespace std;
int count(int s,int e){
	if(s==e){
		return 1;
	}
	if(s>e){
		return 0;
	}
	
	int counter=0;
	for(int i=1;i<=6;i++){
		counter+=count(s+i,e);
	}
	return counter;
}
int main(){
	int start,end;
	cout<<"Enter the starting point: ";
	cin>>start;
	cout<<"enter the ending point: ";
	cin>>end;
	cout<<"The possible ways to end: "<<count(start,end);
	return 0;
}
