#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}
void randomTable(){
	
	for(int r=0;r<25;r++){
		for(int a=0;a<25;a++){
			int x=rand()%25;
	if(x==1) table[r][a]={'B'};
	if(x==2) table[r][a]={'C'};
	if(x==3) table[r][a]={'D'};
	if(x==4) table[r][a]={'E'};
	if(x==5) table[r][a]={'F'};
	if(x==6) table[r][a]={'Q'};	
	if(x==7) table[r][a]={'W'};
	if(x==8) table[r][a]={'R'};
	if(x==9) table[r][a]={'T'};
	if(x==10) table[r][a]={'Y'};
	if(x==11) table[r][a]={'U'};
	if(x==12) table[r][a]={'I'};	
	if(x==13) table[r][a]={'O'};
	if(x==14) table[r][a]={'P'};
	if(x==15) table[r][a]={'L'};
	if(x==16) table[r][a]={'K'};
	if(x==17) table[r][a]={'J'};
	if(x==18) table[r][a]={'H'};	
	if(x==19) table[r][a]={'G'};
	if(x==20) table[r][a]={'S'};
	if(x==21) table[r][a]={'Z'};
	if(x==22) table[r][a]={'X'};
	if(x==23) table[r][a]={'V'};
	if(x==24) table[r][a]={'N'};	
	if(x==25) table[r][a]={'M'};
	if(x==26) table[r][a]={'A'};
	
		}
	

	
	
	}
	
	
	
}
//Write definition of function randomTable() here.


