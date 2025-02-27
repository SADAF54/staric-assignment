#include<iostream>
using namespace std;
int main(){
int n = 7;
for(int i = 0;i<n;i++){
	if(i==0 || i ==n/2 || i==n -1){
		cout<<"***** "<<endl;
	}
	else if(i<n/2){
		cout<<"*  "<<endl;
	}
	else{
		cout<<"    *"<<endl;
	}
}
return 0;
}
	
