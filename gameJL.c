//Jonathan Leyvai
//CSC321
//Finial Project

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int skarkBay(void);

int main(void)
{

                                int doorPicked = 0;
                                int doorLoop = 1;

                                printf("\n\t!Welcome to the matrix!");
                                printf("\nIn here you have 5 mysterious rooms to enter to become someone or something");
                                printf("\nfrom the past, present, or future!");
                                printf("\nChoose wisely now or not :)");

                                while(doorLoop == 1)
                                {
                                        printf("\n(Door 1) - Seems like something is buring on the other side of the door.");
                                        printf("\n(Door 2) - You see a sign that says welcome to paradise.");
                                        printf("\n(Door 3) - There is no door, is just the void.");
                                        printf("\n(Door 4) - You hear people screaming.");
                                        printf("\n(Door 5) - Just a nomral door.");
                                        printf("\nEnter the door you wich to enter:" );
                                        scanf("%d", &doorPicked);


                                        if(doorPicked == 1)
                                        {
                                                int op1 = 0;
                                                int op2 = 0;

                                                printf("\n\nAs you get closer to the door you hear \"KILL THAT WITCH\".");
                                                printf("\nWhen you open the door a wind of blazing flames rush towards you.");
                                                printf("\nThe flmaes start to consume you, through all the flames you see a cross ");
                                                printf("\n [1]- you cry out for Jesus or [2]- you close your eyes in anger");
                                                printf("\nEnter your option: ");
                                                scanf("%d", &op1);

                                                if(op1 == 1)
                                                {
                                                        op2 = 1;
                                                        printf("\nIt's 1425, you wake up as french women and you see a saint.");
                                                        printf("\nThe saint tells you to save your country and to live a virtuous life.");
                                                        printf("\nNo one belived you at first until the miracles happend.");
                                                        printf("\n1429 The Siege of Orleans, as you wave your banner and lead the troops");
                                                        printf("\nto battle they start to belive in you.");
                                                        printf("\nWith your divine visions and courage you helpled your country, France,");
                                                        printf("\nfight off the English man, you become a symbol of hope, a hero, a saint.");
                                                        printf("\n1430 The Siege of Compiengne, in the heat of battle  you get camptured,");
                                                        printf("\nand sold off to the Englsh man. A yaer prison and then it happens, ");
                                                        printf("\na trial on heresy. Verdict guilty. Sentenced to death.");
                                                        printf("\nAs you are being lead to the stake, you hear \"KILL THAT WITCH\"");
                                                        printf("\nEngulfed in flames [1]- you cry out for Jesus or [2]- you close your eyes in anger");
                                                        printf("\n\tEnter your option: ");
                                                        scanf("%d", &op1);

                                                        while(op1 == 1)
                                                        {
                                                                printf("\nNO!");
                                                                printf("\n[1]- you cry out for Jesus or [2]- you close your eyes in anger");
                                                                printf("\n\tEnter your option: ");
                                                                scanf("%d", &op1);

                                                        }
                                                }
                                                if(op1 == 2)
                                                {
                                                        printf("\nYES!");
                                                        printf("\nFeel the anger, they called you a liar, a heretic, and a witch.");

                                                        if(op2 == 0)
                                                        {
                                                                printf("\nYou don't know whats going on or who you are but the screams get louder and");
                                                        }
                                                        else
                                                        {
                                                                printf("\nThe anger is consuming your thoughts, you forget the reason for being there");
                                                        }
                                                        printf("\nall you know in this moment is the feeling of buring and vengeance.");
                                                        printf("\nYou are reborn in that very moment, you become what they feared.");
                                                        printf("\nA Witch!");
                                                        printf("\nYou slaughter the people who accused and burned you alive!");
                                                        printf("\nIn the middle of your rampage you remember a voice that said");
                                                        printf("\n\"Live a virtuous life my dear Jeanne d'arc\"");

                                                        while(op1 == 2)
                                                        {
                                                                printf("\n[1]- you softly say Jesus or [2]- you continue the slaughter");
                                                                printf("\n\tEnter your option: ");
                                                                scanf("%d", &op1);

                                                                if(op1 == 2)
                                                                {
                                                                        printf("\n\"NO!\"");
                                                                }
                                                        }
                                                }
                                                printf("\n\"Come cild you have suffer enough lets go home\"");
                                                printf("\nYou look at your hands dripping in blood and then you stare at the sky and say");
                                                printf("\n\"This is who I'am now, I must kill those accused me\"");
                                                printf("\nAfter the massacre you are curesd with a burning vengeace inside of you forever.");
                                                printf("\nOnce dead you are only remember as a witch and your real name forgotten.");

                                                printf("\n\nThak you again for choosing the Jeane D'arc door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }

                                        else if(doorPicked == 2)
                                        {
                                                srand(time(NULL));
                                                int rando = 1 + rand()%3;
                                                int op3 = 0;

                                                printf("\nWelcome to paradise little mouse!");
                                                printf("\nTodays lucky draw you get Gen %d mosue" , rando);
                                                printf("\nAlright go have fun!\n");


                                                if(rando == 1)
                                                {
                                                        printf("\nWOW! you say as you are put inside a big box with unlimited water and food.");
                                                        printf("\nYou see there are rooms and so you pick your own and find yourself a lady mouse live with.");
                                                        printf("\nLive is nice sex, food, and hanging out with the boys everyday.");
                                                        printf("\nA few days later some random mouse wants to steal your wife.");
                                                        printf("\n[1]- you fight that loser or [2]- trust your wife is going to be loyal");
                                                        printf("\nEnter option: ");
                                                        scanf("%d", &op3);

                                                        if(op3 == 1)
                                                        {
                                                                printf("\nYou kill that loser mouse but now you have a line of mice wanting to fight.");
                                                                printf("\nYou win for the week but then the Gen 2 mouse start to line up.");
                                                                printf("\nYou are getting odler and one day a Gen 2 mouse bodys you and tears you apart");
                                                                printf("\nAs you are dying you see your mouse wife leaving with the gen 2 mosue.");
                                                        }
                                                        else
                                                        {
                                                                printf("\nYou trusted her but unlucky for you that mouse was the king of the mouse box.");
                                                                printf("\nNow you are alone, with just food and sleep becuase you are too old for anything.");
                                                                printf("\nYears pass and the Gen 2 mouse are taking over all the food and they even kick you out of your room.");
                                                                printf("\nAlone in the middle of the box, you die.");
                                                        }

                                                }
                                                if(rando == 2)
                                                {
                                                        printf("\nYou are born into a mouse society where everything is perfect, inside a box.");
                                                        printf("\nEveryday is the same you thing. You see the old heads, Gen 1 mouse doing there thing.");
                                                        printf("\nYour mouse parents tell you, you have to them as well but you ask yourself why when everything is perfect");
                                                        printf("\nOne day all the food spots are full and your very hungry.");
                                                        printf("\n[1]- you fight your way to get some food or [2]- you do nothing");
                                                        printf("\nEnter option: ");
                                                        scanf("%d", &op3);

                                                        if(op3 == 1)
                                                        {
                                                                printf("\nYou try and try but you can't make your way.");
                                                                printf("\nThe rush is over, you finally get your turn to eat.");
                                                                printf("\nYou tell yourself whats the point of fighting when I can just wait.");
                                                                printf("\nThats all you do in live, wait for everything and all you do now is waiting to die.");
                                                        }
                                                        else
                                                        {
                                                                printf("\nYou sit there waiting for every mouse to leave.");
                                                                printf("\nIt's finally your turn to eat and eat you do.");
                                                                printf("\nYou realized if I do nothing and still eat then you dont have to fight,");
                                                                printf("\nThats it you do nothing in life just standing around waiting for eveything to be perfect, you died doing nothing.");
                                                        }
                                                }
                                                if(rando == 3)
                                                {
                                                        printf("\nThis place is weird you don't have to anything, it perfect.");
                                                        printf("\nYou look in the mirror and realize that you look way better than the other mice.");
                                                        printf("\nYou spent yours days eating, cleaing yourself, and sleeping.");
                                                        printf("\nThere are no options for you, no need to fight, everyone waiting there turns on food, no need for anything");
                                                        printf("\nThe years pass by and tell yourself wow this place was a paradise.");
                                                        printf("\nYou die with all your other Gen 3 mice family, the beautiful ones, doing nothing wondering why all the");
                                                        printf("\nGen 1 and Gen 2 mice body parts are all over the place.");
                                                }

                                                printf("\n\nThak you again for choosing the Universe 25 door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }
                                        else if(doorPicked == 3)
                                        {
                                                int days[] = {1, 2, 765675756};
                                                int num = 0;

                                                printf("\nOh it looks like you became a rock.");
                                                printf("\nummmm pick a number between 1 and 3. ");
                                                printf("\nEnter number: ");
                                                scanf("%d", &num);

                                                printf("\n\nOKay so lucky for you get to spend %d days as a rock, have fun", days[num-1]);

                                                if(num == 3 )
                                                {
                                                        printf("\nNot much really to do but just sit around as days go by");
                                                        printf("\nbut it seems like your on a moon and wait is that earth???");
                                                        printf("\nDay 2134 - Oh cool the humans are landing on the moon");
                                                        printf("\nDay 455656 - OMG the planet is on fire, did they nuke eachother???");
                                                        printf("\nDay 13867098 - Not much has happen... are those Alien spaceships, they found no life on earth.");
                                                        printf("\nDay 5000000000 - it's so boring oh shit the sun is explo...");
                                                        printf("\nComputer: Opps went a bit overboard with the days Sorry wont happen again.");

                                                }

                                                if(num == 2)
                                                {
                                                        printf("\nDamn I'm a rock at the beach.");
                                                        printf("\nTwo hours pass by and you peolpe sitting up chairs and stuff.");
                                                        printf("\nWhats going on? Everyone is so well dressed");
                                                        printf("\nOh its a couple getting married, you see everyone dancing, laughing, and drinking.");
                                                        printf("\nWhat a beatuful sight.");
                                                        printf("\nNext day you see a different couple but they are fighting");
                                                        printf("\nand one of them is getting closer to you and picks you up.");
                                                        printf("\nThe next moment you realize you being used as a weapon to kill the man");
                                                        printf("\nThe girl ties up the man in a bag and thros him in the water, and uses you to sink the body.");
                                                        printf("\nWell only one night to go.");
                                                }
                                                if(num == 1)
                                                {
                                                        printf("\n1 days is not....");
                                                        printf("\nOh Im back at the door what happened?");
                                                        printf("\nI think it glicthed and it was only set to one second.");
                                                        printf("\nHELLO anyone there!");
                                                        printf("\na robot approachs you and tells you that you broke free from the matrix.");
                                                        printf("\nWhat????");
                                                        printf("\nno this is just a game im playing, this game is dumb get me out. clsoe game.");
                                                        printf("\nWhats happing, why can't I close the game...");
                                                        printf("\nMessage from computer: Sorry about that it seems like someone was trying to escaple from another room");
                                                        printf("\nIll fix it just in a momenet. Thank for understangin. You can try are other doors if you wish to.");
                                                }

                                                printf("\n\nThak you again for choosing a random rock door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }
                                        else if(doorPicked == 4)
                                        {
                                                printf("\nMessage from Computer: Sorry for the inconvenience, someone tried to escape so we are working to fix");
                                                printf("\nit, comeback later.");

                                                printf("\n\nThak you again for choosing the IHNMAIMS door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                                doorLoop = 1;

                                                printf("\nThank you for staying :)\n");
                                        }
                                        else if(doorPicked == 5)
                                        {
                                                int op4 = 0;

                                                printf("\nYAY! you get to be me for the day.");
                                                printf("\n[1]- go study for final exams or [2]- go the donut shop");
                                                printf("\nEnter option: ");
                                                scanf("%d", &op4);
                                                int theNum = skarkBay();

                                                if(op4 == 1)
                                                {
                                                        printf("\nComputer: Ughhh your so boring let me go get some donuts.");
                                                        printf("\nAnway since you suck at studing you got me an F. Comptuer: Thanks");
                                                        printf("\nYou notice my drums set and you decied to play. Comptuer: you suck.");
                                                        printf("\nNo one is blowing up the phone so you decide to download hinge for me");
                                                        printf("\nYou look at my camera roll for some photos. Computer: Yooooo not those ");
                                                        printf("\nCumputer: here let me spawn you a magical ball that will tell you how mnay girls are going to swipe one me.");
                                                        printf("\nYou shake the ball and it says %d", theNum);
                                                        printf("\nComputer: I can't tell was that a lot???");
                                                        printf("\nComputer: Anway your time is over bye,I got stuff to do");
                                                }
                                                else
                                                {
                                                        printf("\nComputer: Yes some donuts");
                                                        printf("\nYou get some donuts and a lottery ticket.");
                                                        printf("\nYou go check the numbers to see if \"I\" won ");
                                                        printf("\nComputer: did you win???");
                                                        printf("\nYou say holy shit we won %d dolloars", theNum);
                                                        printf("\nComputer:I'm assuming that I won big, thanks man but go ahead and logout for me. I ll make sure to send you some");
                                                        printf("\nBYE BYE");
                                                }

                                                printf("\n\nThak you again for choosing the Jonathan Leyva door, want to choose another room or leave :(  ???");
                                                printf("\nEnter: [1]- to STAY and pick another room or [2]- to leave :( ");
                                                scanf("\n%d", &doorLoop);
                                        }
                                }


                                printf("\n\nThank you for choosing the Matrix, okay leave now :)\n\n");
                                puts("room56\n\n");


}
int skarkBay(void)
{
        srand(time(NULL));
        int rando2 = 1 + rand()%10000000;

        return rando2;
}
