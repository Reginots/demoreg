#include <iostream>

using namespace std;
void cursedog(int normalattack, int strongattack, int playerhp, int cursedoghp, int cursedogattack, string name);
int main()
{
    cout <<"==================================="<<endl;
    cout <<"A PROJECT MADE BY"<<" "<<"REGINO CELA"<<endl;
    cout <<"EMAIL"<<" "<<"Reginotsela@gmail.com"<<endl;
    cout <<"==================================="<<endl;



    string playerclass,name,playerpick,item1="NONE",item2="NONE",item3="NONE";

    int warriornormal=8,warriorstrong=10,magenormal=10,magestrong=13,warriorhp=35,magehp=30,slime1hp=28,slime1attack=7,cursedog1hp=30,cursedog1attack=8;



    cout<<"Hello player."<<endl;
    cout<<"May i have your name please."<<endl;
    cin>> name;
    cout<<"Hello"<<" "<<name<<" "<<"much better now dont you think ?."<<endl;
    cout<<"YES or NO."<<endl;
    cin>>playerpick;



    if(playerpick=="Yes"||playerpick=="yes"){
        cout<<"Thats the spirit"<<" "<<name<<"."<<endl;
    }else if(playerpick=="No"||playerpick=="no"){
        cout<<"Wow what a rude you are"<<" "<<name<<"."<<endl;}


    cout<<"Now pick your class."<<endl;
    cout<<"WARRIOR"<<endl;
    cout<<"or"<<endl;
    cout<<"MAGE"<<endl;
    cin>>playerclass;

    while(playerclass!="Warrior"&&playerclass!="warrior"&&playerclass!="Mage"&&playerclass!="mage"){
        cout<<"I didnt know i was dealing with a child"<<" "<<name<<" "<<"."<<endl;
        cout<<"Pick your class"<<" "<<name<<" "<<"correct this time."<<endl;
        cin>>playerclass;}


    if(playerclass=="warrior"||playerclass=="Warrior"){
        cout<<"So you picked the warrior class."<<endl;
        cout<<"Now that you picked your class:"<<playerclass<<"."<<endl;
        cout<<"Let me tell you a little about your class."<<endl;
        cout<<"The"<<" "<<playerclass<<" "<<"just like all the other classes has."<<endl;
        cout<<"A normal attack deals:"<<warriornormal<<" "<<"DMG."<<endl;
        cout<<"A strong attack deals:"<<warriorstrong<<" "<<"DMG."<<endl;
        cout<<"Your HP is:"<<warriorhp<<endl;
            }else if(playerclass=="Mage"||playerclass=="mage"){
                cout<<"So you picked the mage class."<<endl;
                cout<<"Now that you picked your class:"<<playerclass<<"."<<endl;
                cout<<"Let me tell you a little about your class."<<endl;
                cout<<"The"<<" "<<playerclass<<" "<<"just like all the other classes has."<<endl;
                cout<<"A normal attack deals:"<<magenormal<<" "<<"DMG."<<endl;
                cout<<"A strong attack deals:"<<magestrong<<" "<<"DMG."<<endl;
                cout<<"Your HP is:"<<magehp<<endl;}


    cout<<"====================================================================================================================="<<endl;
    cout<<"Some more things you have to know."<<endl;
    cout<<"After each battle you have to find small pillars so you can heal your self throughout the journie."<<endl;
    cout<<"If you see an enemies HP being negative that means the enemy is dead attack the other enemy."<<endl;
    cout<<"The most important tip is to not close the game until you finish no saved progress is saved."<<endl;
    cout<<"====================================================================================================================="<<endl;

    cout<<"KNOW LET US BEGIN."<<endl;
    cout<<"====================================================================================================================="<<endl;

    cout<<"Once up on a time there was a"<<" "<<playerclass<<" "<<"named"<<" "<<name<<" "<<"."<<endl;
    cout<<name<<" "<<"was living alone in the mountains but quickly realised that he had to move away."<<endl;
    cout<<"Thanks to the curse of the mountain GOD the mountain was shortly about to collapse."<<endl;
    cout<<name<<" "<<"decided he was ready to go but first."<<endl;
    cout<<"What will he get with him to start the journey."<<endl;
    cout<<"NOTE YOU CAN  ONLY GET 3 ITEMS"<<endl;
    cout<<"Pick your action depending of the action the game can change its course."<<endl;
    cout<<"BE CAREFULL!!!."<<endl;

    cout<<"Leave."<<endl;
    cout<<"Check."<<endl;
    cin>>playerpick;


    if(playerpick=="Leave"||playerpick=="leave"){
        cout<<name<<" "<<"left without any items how brave of him dont you think?."<<endl;
            }else if(playerpick=="Check"||playerpick=="check"){
                cout<<name<<" "<<"checked around the house the only think that was left there."<<endl;
                cout<<"a rope-an axe."<<endl;
                cout<<"Take."<<endl;
                cout<<"Leave."<<endl;
                cin>>playerpick;




                    if(playerpick=="Take"||playerpick=="take"){
                        cout<<"Witch one."<<endl;
                        cout<<"Rope."<<endl;
                        cout<<"Axe."<<endl;
                        cin>>playerpick;

                        while(playerpick!="Rope"&&playerpick!="rope"&&playerpick!="Axe"&& playerpick!="axe"){
                            cout<<"can you be a little more serious about this."<<endl;
                            cin>>playerpick;
                        }

                        cout<<name<<" "<<"picked up the"<<" "<<playerpick<<"."<<endl;
                        item1=playerpick;
                            }else if(playerpick=="Leave"||playerpick=="leave"){
                                cout<<name<<" "<<"left without picking anything what a fool."<<endl;}
                }

    cout<<"======================================================================================================================"<<endl;

    cout<<"As "<<" "<<name<<" "<<"was leaving he noticed a creature next to his house."<<endl;
    cout<<"The creature was screaming in agony and pain."<<endl;
    cout<<"What will you"<<" "<<name<<" "<<"do."<<endl;
    cout<<"Run."<<endl;
    cout<<"Check."<<endl;
    cin>>playerpick;

    while(playerpick!="Run"&&playerpick!="run"&&playerpick!="check"&& playerpick!="Check"){
        cout<<"Are you having stroke or something run or check."<<endl;
        cin>>playerpick;}

    if(playerpick=="run"||playerpick=="Run"){
        cout<<"Maybe a good choice maybe not who know."<<endl;
            }else{
                cout<<"GET READY FOR BATTLE"<<" "<<name<<" "<<"!!!."<<endl;
                cout<<"A slime like creature appeared before you."<<endl;
                cout<<"the monsters HP is:"<<slime1hp<<" "<<"."<<endl;

                    while(slime1hp>0){

                            if(playerclass=="warrior"||playerclass=="warrior"){

                                    cout<<"choose."<<endl;
                                    cout<<"Attacks."<<endl;
                                    cout<<"==============="<<endl;
                                    cout<<"Normal."<<endl;
                                    cout<<"Strong."<<endl;
                                    cout<<"==============="<<endl;
                                    cin>>playerpick;

                                if(playerpick=="normal"||playerpick=="Normal"){
                                    cout<<name<<" "<<"used"<<" "<<playerpick<<" "<<"attack."<<endl;
                                    slime1hp=slime1hp-warriornormal;
                                    cout<<"The slime took"<<" "<<warriornormal<<" "<<"DMG"<<endl;
                                    cout<<"Slimes HP is:"<<slime1hp<<endl;
                                    if(slime1hp>0){
                                    cout<<"Enemy turn!!!"<<endl;
                                    cout<<"Slime attacked!!!"<<endl;
                                    warriorhp=warriorhp-slime1attack;
                                    cout<<name<<" "<<"took:"<<slime1attack<<endl;
                                    cout<<name<<" "<<"HP:"<<warriorhp<<endl;}
                                }else if(playerpick=="Strong"||"strong"){
                                    cout<<name<<" "<<"used"<<" "<<playerpick<<" "<<"attack."<<endl;
                                    slime1hp=slime1hp-warriorstrong;
                                    cout<<"The slime took"<<" "<<warriorstrong<<" "<<"DMG"<<endl;
                                    cout<<"Slimes HP is:"<<slime1hp<<endl;
                                    if(slime1hp>0){
                                    cout<<"Enemy turn!!!"<<endl;
                                    cout<<"Slime attacked!!!"<<endl;
                                    warriorhp=warriorhp-slime1attack;
                                    cout<<name<<" "<<"took:"<<slime1attack<<endl;
                                    cout<<name<<" "<<"HP:"<<warriorhp<<endl;}}




                                    }else{

                                            cout<<"choose."<<endl;
                                            cout<<"Attacks."<<endl;
                                            cout<<"==============="<<endl;
                                            cout<<"Normal."<<endl;
                                            cout<<"Strong."<<endl;
                                            cout<<"==============="<<endl;
                                            cin>>playerpick;

                                        if(playerpick=="normal"||playerpick=="Normal"){
                                            cout<<name<<" "<<"used"<<" "<<playerpick<<" "<<"attack."<<endl;
                                            slime1hp=slime1hp-magenormal;
                                            cout<<"The slime took"<<" "<<magenormal<<" "<<"DMG"<<endl;
                                            cout<<"Slimes HP is:"<<slime1hp<<endl;
                                            if(slime1hp>0){
                                            cout<<"Enemy turn!!!"<<endl;
                                            cout<<"Slime attacked!!!"<<endl;
                                            magehp=magehp-slime1attack;
                                            cout<<name<<" "<<"took:"<<slime1attack<<endl;
                                            cout<<name<<" "<<"HP:"<<warriorhp<<endl;}
                                        }else if(playerpick=="Strong"||"strong"){
                                            cout<<name<<" "<<"used"<<" "<<playerpick<<" "<<"attack."<<endl;
                                            slime1hp=slime1hp-magestrong;
                                            cout<<"The slime took"<<" "<<magestrong<<" "<<"DMG"<<endl;
                                            cout<<"Slimes HP is:"<<slime1hp<<endl;
                                            if(slime1hp>0 ){
                                            cout<<"Enemy turn!!!"<<endl;
                                            cout<<"Slime attacked!!!"<<endl;
                                            magehp=magehp-slime1attack;
                                            cout<<name<<" "<<"took:"<<slime1attack<<endl;
                                            cout<<name<<" "<<"HP:"<<magehp<<endl;}
                                            }
                                            }
                                            }
                                            }



        if(slime1hp<=0){
        cout<<"BATTLE WON!!!"<<endl;}


        if(warriorhp==0||magehp<=0){
        cout<<"BATTLE LOST...."<<endl;
        }

        cout<<"==========================================================================================="<<endl;
        if(playerpick=="check"||playerpick=="Check"){
        cout<<name<<" "<<"thought to him self what was that monster."<<endl;}
        cout<<"Seconds after a small earthquake started"<<" "<<name<<"tried to find shelter."<<endl;
        cout<<"After the earthquake stopped."<<endl;
        cout<<name<<" "<<"started running to a small gave he saw."<<endl;
        cout<<name<<" "<<"was tired after what happened."<<endl;
        cout<<"What will he do."<<endl;
        cout<<"Explore."<<endl;
        cout<<"Leave."<<endl;

        cin>>playerpick;

        if(playerpick=="explore"||playerpick=="Explore"){
            cout<<name<<" "<<"looked around but nothing out of the ordinary."<<endl;
            cout<<name<<" "<<"decided it would be a good idea to rest a little after all he was tired."<<endl;
            cout<<"In the end"<<" "<<name<<" "<<"rested behind some rocks to hide form any danger."<<endl;

        }else if(playerpick=="leave"||playerpick=="Leave"){
            cout<<name<<" "<<"decided to leave but."<<endl;
            cout<<name<<" "<<"even after all that happened he became more and more tired."<<endl;
            cout<<"In the end"<<" "<<name<<" "<<"rested behind some rocks to hide form any danger."<<endl;}

        if(playerclass=="Warrior"||playerclass=="warrior"){
            cout<<"After the rest your HP became full"<<endl;
            warriorhp=35;
            cout<<"HP is:"<<warriorhp<<endl;
        }else if(playerclass=="Mage"||playerclass=="mage"){
            cout<<"After the rest your HP became full"<<endl;
            magehp=30;
            cout<<"HP is:"<<magehp<<endl;}


        cout<<"The next day came and"<<" "<<name<<" "<<"was ready to leave the cave."<<endl;
        cout<<name<<" "<<"stared his journey down the mountain."<<endl;
        cout<<"After some time"<<" "<<name<<" "<<"saw a field full of fruits and goods."<<endl;
        cout<<"It seems no one is here should i get some stuff?."<<endl;
        cout<<"YES"<<endl;
        cout<<"OR"<<endl;
        cout<<"NO"<<endl;
        cin>>playerpick;


        while(playerpick!="Yes"&&playerpick!="yes"&&playerpick!="no"&& playerpick!="No"){
            cout<<"This is an important moment please focus."<<endl;
            cout<<"YES OR NO"<<endl;
            cin>>playerpick;}

        if(playerpick=="yes"||playerpick=="Yes"){
            cout<<name<<" "<<"saw a dog run to him."<<endl;
            cout<<"But as the dog was getting closer something seemed wrong with it."<<endl;
            cout<<"MOUNTAIN CURSE DOG ATTACKED!!!"<<endl;
            if(playerclass=="Warrior"||playerclass=="warrior"){
                 cursedog(8,10,35,30,8,name);
            }else if(playerclass=="mage"||playerclass=="Mage"){
                 cursedog(10,13,30,30,8,name);}
        }else if(playerpick=="No"||playerpick=="no"){
            cout<<name<<" "<<"left without picking something."<<endl;}





    return 0;
}









void cursedog(int normalattack, int strongattack, int playerhp, int cursedoghp, int cursedogattack, string name){

    string playerpick;
    cout<<"A strange aura emerges from the dog."<<endl;
    cout<<"Each turn the dog heals 2 HP."<<endl;




    while(cursedoghp>0){

            cout<<"choose."<<endl;
            cout<<"Attacks."<<endl;
            cout<<"==============="<<endl;
            cout<<"Normal."<<endl;
            cout<<"Strong."<<endl;
            cout<<"==============="<<endl;
            cin>>playerpick;


        if(playerpick=="Normal"||playerpick=="normal"){
            cout<<name<<" "<<"used"<<" "<<playerpick<<" "<<"attack."<<endl;
            cursedoghp=cursedoghp-normalattack+2;
            cout<<"The cursed dog took"<<" "<<normalattack<<" "<<"DMG"<<endl;
            cout<<"cursed dog HP is:"<<cursedoghp<<endl;
            if(cursedoghp>0){
            cout<<"Enemy turn!!!"<<endl;
            cout<<"cursed dog attacked!!!"<<endl;
            playerhp=playerhp-cursedogattack;
            cout<<name<<" "<<"took:"<<cursedogattack<<endl;
            cout<<name<<" "<<"HP:"<<playerhp<<endl;}
        }else if(playerpick=="Strong"||playerpick=="strong"){
            cout<<name<<" "<<"used"<<" "<<playerpick<<" "<<"attack."<<endl;
            cursedoghp=cursedoghp-strongattack+2;
            cout<<"The cursed dog took"<<" "<<strongattack<<" "<<"DMG"<<endl;
            cout<<"cursed dog HP is:"<<cursedoghp<<endl;
            if(cursedoghp>0){
            cout<<"Enemy turn!!!"<<endl;
            cout<<"cursed dog attacked!!!"<<endl;
            playerhp=playerhp-cursedogattack;
            cout<<name<<" "<<"took:"<<cursedogattack<<endl;
            cout<<name<<" "<<"HP:"<<playerhp<<endl;}

            }

        }

         if(cursedoghp<=0){
        cout<<"BATTLE WON!!!"<<endl;}

        if(playerhp<=0){
        cout<<"BATTLE LOST...."<<endl;}



}