#include<iostream>      // bibliotecas recorridas
#include<cmath>
#include<random>
#include<string>												
#include<ctime>			
using namespace std;										
	int bhp();							// principais variáveis:			
	int bdamage();                      // dano sofrido	                                    
	int hp=(0);                         // pontos de vida
	int mana=(0);                       
	int lvl=(1);                       // nível da personagem
	int xp=(0);                        // experiencia acumulada
	int character=(0);                 //personagem
	int race=(0);                      //raça
	int damage(0);                     //dano causado
	int damage2(0);                
	int str,inte,dex;                  // strenght, intelligence, dexterity or ability
void tutorial();					   // função para definir o tutorial
int roll(int);
void room();                           // divisão da masmorra
int main(){
	int action;						  
	int past;
	int bhp;
	int bdamage;
	int hp=0;
	int mana=0;
	int lvl=1;
	int p=0;
	int start=0;
	int character=0;
	int race=0;
	int damage;
	int damage2;
	int str,inte,dex;
	string choice;
	string room="";
	int flip;										
	srand(time(0));																		// Início do jogo e o grafismo
	cout << "                                                                    \n";
	cout<<"Welcome to World of Dungeons & Dragons!"<<endl;
	cout << "                                                                    \n";
	cout << "######                                                        ##    \n";   
    cout << "#     # #    # #    #  ####  ######  ####  #    #  ####      #  #   \n";
    cout << "#     # #    # ##   # #    # #      #    # ##   # #           ##    \n";
    cout << "#     # #    # # #  # #      #####  #    # # #  #  ####      ###    \n";
    cout << "#     # #    # #  # # #  ### #      #    # #  # #      #    #   # # \n";
    cout << "#     # #    # #   ## #    # #      #    # #   ## #    #    #    #  \n";
    cout << "######   ####  #    #  ####  ######  ####  #    #  ####      ###  # \n";
    cout << "                                                                    \n";
    cout << "######                                                              \n";    
    cout << "#     # #####    ##    ####   ####  #    #  ####        #    ### ######  \n"; 
    cout << "#     # #    #  #  #  #    # #    # ##   # #           # #    #  #     # \n"; 
    cout << "#     # #    # #    # #      #    # # #  #  ####      #   #   #  #     # \n";
    cout << "#     # #####  ###### #  ### #    # #  # #      #    #######  #  ######  \n";
    cout << "#     # #   #  #    # #    # #    # #   ## #    #    #     #  #  #     # \n";
    cout << "######  #    # #    #  ####   ####  #    #  ####     #     #  #  #     # \n";
    cout << "                                                     #     # ### ######  \n\n";   
	cout<<"Pick your Character"<<endl;      									// seleção da personagem
	cout<<"Barbarian : 1 : 'I will break everything!'"<<endl;
	cout<<"\t Strength = 8";
	cout<<"\t Dexterity =1";
	cout<<"\t Intelligence = 1"<<endl;
	cout<<"Archer : 2 : 'one shot one kill'"<<endl;
	cout<<"\t Strength = 2";
	cout<<"\t Dexterity =6";
	cout<<"\t Intelligence = 4"<<endl;
	cout<<"Wizard : 3: 'Think first, act second'"<<endl;
	cout<<"\t Strength = 1";
	cout<<"\t Dexterity =2";
	cout<<"\t Intelligence = 7"<<endl;
	cout<<"Thief : 4 : 'Once a thief, always a thief!'"<<endl;
	cout<<"\t Strength = 1";
	cout<<"\t Dexterity =8";
	cout<<"\t Intelligence = 1 \n";
	cin>>character;															// input do utilizador de teclas 1,2,3,4 para a escolha da personagem
	cout<<"Pick your Race"<<endl;
	cout<<"Human : 1 : \n \t +1 All Stats"<<endl;
	cout<<"Orc : 2 : \n \t +2 Strength"<<endl;
	cout<<"Elf : 3 : \n \t +1 Dexterity, +1 Intelligence"<<endl;
	cout<<"Dwarf : 4 : \n \t +1 Strength, +1 Intelligence"<<endl;
	cin>>race;																// input de utilizador de teclas 1,2,3,4 para selecionar a raça
	if(character==1)														// se optar por "1" recebe os seguintes atributos: 
		str=8,dex=1,inte=1;
	if(character==2)														// se optar por "2" recebe os seguintes atributos: 
		str=2,dex=6,inte=4;
	if(character==3)														// se optar por "3" recebe os seguintes atributos: 
		str=1,dex=2,inte=7;
	if(character==4)														// se optar por "4" recebe os seguintes atributos: 
		str=1,dex=8,inte=1;
	
	if(race==1){															// se optar por "1" recebe os seguintes atributos:
		str=str+1;
		dex=dex+1;
		inte=inte+1;
	}
	if(race==2){															// se optar por "2" recebe os seguintes atributos:
		str=str+2;
		dex=dex+0;
		inte=inte+0;
	}
	if(race==3){															// se optar por "3" recebe os seguintes atributos:
		str=str+0;
		dex=dex+1;
		inte=inte+1;
	}
	if(race==4){															// se optar por "4" recebe os seguintes atributos:
		str=str+1;
		dex=dex+0;
		inte=inte+1;
	}
	mana=inte*2;
	hp=(str+dex)+5;
	::hp=hp;
	::mana=mana;
	cout<<"\t Your stats are now..."<<endl;
	cout<<"\t Level : "<<::lvl<<endl;
	cout<<"\t Experience Points : "<<::xp<<endl;
	cout<<"\t Hit Points : "<<::hp<<endl;
	cout<<"\t Mana Points : "<<::mana<<endl;
	cout<<"\t Strength : "<<str<<endl;
	cout<<"\t ability : "<<dex<<endl;
	cout<<"\t Intelligence : "<<inte<<endl;
	cout<<"Your Weapon is ... "<<endl;
	if(character==1){
		cout<<"Long Sword and Shield,(DAMAGE)"<<endl;
		
	}if(character==2){
		cout<<"Long Bow + 20 Arrows,(DAMAGE)"<<endl;
	
	}if(character==3){
		cout<<"Spell Book,(DAMAGE) "<<endl;
		cout<<"\t \t SPELL BOOK"<<endl;
		cout<<"\t Fireball, Cost = 20 Mana"<<endl; 
		
		
	
	}
	if(character==4){
		cout<<"Short Swords,(DAMAGE) Short Swords = 2*Roll + Dexterity, Knives = Roll, Limited Ammunition"<<endl;
	}tutorial();
	
	for(int i=0;i<hp;i++){
		cout<<"(+)";
	}
	cout<<endl;
	for(int i=0;i<mana;i++){
		cout<<"(-)";
	}
	cout<<endl;
	cout<<"May the odds be ever in your favour, Adventureer! "<<endl;
	while(::lvl<9){
POINTS:
		if(::xp>=10){
			::lvl=::lvl+1;
			cout<<"You have leveled up!!!!"<<endl;
			cout<<"You are now level " <<::lvl<<endl;
			
			::xp=0;
		}
	cout<<"The room you are in has these parameters"<<endl;
	for(int i=0;i<4;i++){
	flip=rand()%2;
	if(flip==1){
		room+="w";
	}
	else{
		room+="e";
	}
	if(room=="wwww"){room="";i=0;}
	}
	
	cout<<room<<endl;
	while(p!=1){
	cout<<"Enter your direction of choice"<<endl;
	cin>>choice;
	if(choice=="N" && room.substr(0,1)=="e"){cout<<"you have gone north"<<endl;      						//escolha de direção n,e,s,w em capslock (norte,este,sul,oeste)
	p=1;}
	if(choice=="E" && room.substr(1,1)=="e"){cout<<"you have gone east"<<endl;
	p=1;}
	if(choice=="S" && room.substr(2,1)=="e"){cout<<"you have gone south"<<endl;
	p=1;}
	if(choice=="W" && room.substr(3,1)=="e"){cout<<"you have gone west"<<endl;
	p=1;}
	if(choice=="N" && room.substr(0,1)=="w"){cout<<"You can't go that way"<<endl; }
	if(choice=="E" && room.substr(1,1)=="w"){cout<<"You can't go that way"<<endl; }
	if(choice=="S" && room.substr(2,1)=="w"){cout<<"You can't go that way"<<endl; }
	if(choice=="W" && room.substr(3,1)=="w"){cout<<"You can't go that way"<<endl; }
	}
	cout<<"YOU HAVE MADE IT PAST"<<endl;
	p=0;
	room="";
	flip=rand()%2;
	bhp=rand()%15;
	if(flip==1){
		while(bhp>0){
		cout<<"Monsters HP : "<<endl;
		for(int i=0;i<bhp;i++){
		cout<<"(+)";
	}
	cout<<endl;
	cout<<"Your HP : "<<endl;
	for(int i=0;i<hp;i++){
		cout<<"(+)";
	}
	cout<<endl;
	cout<<"You Mana : "<<endl;
		for(int i=0;i<mana;i++){
		cout<<"(-)";
	}cout<<endl;
		if(hp<=0){cout<<"You have failed in your quest, In realm has now desended into madness. Maybe in the next life you will be a hero"<<endl;cout<<"GAME OVER"<<endl; goto END;}
	
	cout<<"Enter you choice of actions"<<endl;
	cout<<"1. Attack"<<endl;
	cout<<"2. Run"<<endl;
	cout<<"3. Attempt to heal"<<endl;
	cin>>action;
	damage=rand()%6;
	bdamage=rand()%6+2;
	int heal=rand()%8;
	if(action==1){bhp=bhp-damage;cout<<"You attacked the monster for " << damage<<"damage"<<endl;}
	if(action==2){hp=hp-bdamage; cout<<"You have run away from the fight"<<endl; goto POINTS;}
	if(action==3){hp=hp+heal;}
	if(bhp>0){cout<<"The monster attacks you for "<<bdamage<<"damage"<<endl;hp=hp-bdamage;}
		}
		cout<<"You have slain the monster"<<endl;
		::xp=::xp+10;
		cout<<"You have gained 10 XP"<<endl;
	}else{
		::xp=::xp+5;
	}
	
	
	}cout<<"You have reached Level 9 and you have won the Game!"<<endl;
	cout<<"You trully are a great Hero of the Land"<<endl;
	cout<<"Thank you for playing Dungeons and Dragons AIB"<<endl;
	END:
	return 0;

}
void tutorial() {
	int c;
	cout<<"Would you like to see the tutorial? (1, Yes)(2, No)"<<endl;
	cin>>c;
	if(c==1){
		cout<<"All inputs will be either N,E,S,W for directions"<<endl;
		cout<<"All inputs will be 1,2,3,4 for options in battle"<<endl;
		cout<<" 1. Attack (Option 1) \n 2. Attack (Option 2) \n 3. Heal (Wizard Only)\n 4. Run (Suffer 1 Attack before leaving)"<<endl;
		cout<<" Your HP bar will be shown as an amount of (+) and so will your mana with (-) missing HP or Mana will be shown as (/) \n a monster wil also show this information and its level of challenge"<<endl;

	
	}
	else{
		cout<<"You have skipped the tutorial"<<endl;
}
}