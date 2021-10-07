#include <stdio.h>
void main()

{
 char ansa,ansb,ansc,ansd,anse,A,B,C,D,K;
 printf("Welcome to kbc.\nHere is your first question.\nQ.=Which was our year of independence.\nA.1942 B.1945\nC.1947 D.1950\n");
 scanf("%c",&ansa);
 if(ansa!='C')
 printf("You lost the game");
 else
            {
            printf("You won the first round.\nHere is your second question.\nWhat is the strenght of our class.\nA.60 B.61       \nC.62 D.63\n");
            scanf("%c",&K);
            scanf("%c",&ansb);
            if(ansb!='C')
                        printf("You lost the game");
            else
                        {
                            printf("You won the second round.\nHere is your Third question\nWhat is 5+5=\nA.10 B.55\nC.25 D.100\n");
                            scanf("%c",&K);
                            scanf("%c",&ansc);
                            if(ansc!='A')
                            printf("You lost the game.");

                            else
                            {
                             printf("You won the third round.\nHere is your forth question.\nwhat is capital of India\nA.Mumbai B.Pune\nC.Hyderabad D.Delhi\n");
                             scanf("%c",&K);
                             scanf("%c",&ansd);
                             if(ansd!='D')
                             printf("You lost the game");
                             else
                             {
                                 printf("You won the fifth round.\nHere is your final question\nWhat is 3*4-5+84-54=\nA.32 B.37\nC.47 D.28\n");
                                 scanf("%c",&K);
                                 scanf("%c",&anse);
                                 if(anse=='B')
                                 printf("You won Horyaaah.............");
                                 else
                                 printf("Sorry you lost");
                             }
}
}
}
}



