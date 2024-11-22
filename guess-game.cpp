#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	
	srand(time(0));
	int userNum=0, tries=0,randomNumber=0;
	cout<<"Welcome To Guess Game, Guess A Number Between (1-10)\n";
	while(true){
	randomNumber=(rand() % 10) + 1;
	cout<<"\nEnter A Number To Guess!\n";
	cin>>userNum;
	if(userNum>10 || userNum<0){
		cout<<"Your Number Is Not In The Range Please Enter A Number Between (1-10)";
		continue;
	}
	tries++;
	if(userNum>randomNumber){
		cout<<"Too High! Number Was: "<<randomNumber;
	}
	else if(userNum<randomNumber){
		cout<<"Too Low! Number Was: "<<randomNumber;
	}
	else if(userNum==randomNumber){
		cout<<"Congratulations You Guessed It right! Number Was: "<<randomNumber<<" You Take: "<<tries<<" Tries To Complete The Game!";
		break;
	}
	else {
		cout<<"Invalid Input";
	}
	
	}
	return 0;
	
}
