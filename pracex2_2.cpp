#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			}
		
		}
	}
}

int main(){
	float g,k=0;
	ifstream source("score1.txt");
	string line;
	float a[]={};
	while(getline(source,line)){
	g=atof(line.c_str());	
	
	

	k++;
	
	}
	
	for(int i=0;i<20;i++)cout<<a[i]<<"\n";
	
	return 0;
}

