#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void help();
void game();
int main()
{

  char choice;
  mainhome:
        printf("\n\t\t\t*********************************************\n");
        printf("\n\n\n\t\t\t\t\tC PROJECT ON 'QUIZ' ");
        printf("\n\n\t\t\t\tSubmitted by:\n");
        printf("\t\t\t\t\tNamrata Das(THA075BEI026)\n");
        printf("\t\t\t\t\tNeelam Karki(THA075BEI027)\n");
        printf("\t\t\t\t\tRuchi Manandhar(THA075BEI035)\n");
        printf("\n\t\t\t*********************************************\n");
        printf("\n\t\t\t\t\tMULTIPLAYER QUIZ GAME\n");
        printf("\n\t\t\t*********************************************\n");
        printf("\n\t\t\t\tEnter 'S' to start the game");
        printf("\n\t\t\t\tEnter 'H' for help");
        printf("\n\t\t\t\tEnter 'Q' to quit the game");
        choice=toupper(getch());
        if(choice=='H')
        {
            system("cls");
            help();
            getch();
            goto mainhome;

        }
        else if(choice=='Q')
        {
            exit(1);
        }
        else if(choice=='S')
        {
            system("cls");
            game();
            getch();
            system("cls");
        }
            return 0;
}
        void game()
        {
            int scr1=0,scr2=0,scr3=0;
            char ans;
            system("cls");
          printf("\n\n\n\t\t\t\tWELCOME TO QUIZ!!!!");
          printf("\n\n\n\t\t\t\t\tROUND 1");

//ROUND 1 QUESTION 1 A
          printf("\n\n\t\t\t\t\tTEAM A");
          printf("\n\n\tWhich of following is particle of light?");
          printf("\n\n\t\t(A)electron\t\t\t(B)proton");
          printf("\n\n\t\t(C)photon\t\t\t(D)neutron");
          ans=toupper(getch());
          if(ans=='C')
          {
          printf("\n\n\n\t\t\t[Correct!!]");
          scr1=scr1+4;
          printf("\n\n\t\t\tScore TEAM A:\t%d",scr1);
          }
          else// if(ans=='A'||ans=='B'|| ans=='D')
          {
                 printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                 printf("\n\tQuestion passed to TEAM B");
                 printf("\n\n\tWhich of following is particle of light?");
                 printf("\n\n\t\t(A)electron\t\t\t(B)proton");
                 printf("\n\n\t\t(C)photon\t\t\t(D)neutron");
                 ans=toupper(getch());
                 if(ans=='C')
                 {
                       printf("\n\n\t\t\t[Correct!!]");
                       scr2=scr2+2;
                        printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                 }
                 else// if(ans=='A' || ans=='B' || ans=='D')
                     {
                       printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                       printf("\n\tQuestion passed to TEAM C");
                       printf("\n\n\tWhich of following is particle of light?");
                       printf("\n\n\t\t(A)electron\t\t\t(B)proton");
                       printf("\n\n\t\t(C)photon\t\t\t(D)neutron");
                       ans=toupper(getch());
                       if(ans=='C')
                        {
                        printf("\n\n\t\t\t[Correct!!]");
                        scr3++;
                         printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                        }
                       else
                        {
                        printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                        printf("\n\t\t\tQuestion terminated.\n\t\t\t Right answer is (C). ");
                        }

                     }
             }
             //else

              //printf("invalid answer\n");


//ROUND 1 QUESTION 1 B
             printf("\n\n\n\n\n\t\t\t\t\tTEAM B");
             printf("\n\nFor which of the following disciplines is Nobel Prize awarded?");
             printf("\n\n(A)Physics and Chemistry\t\t\t(B)Physiology or Medicine");
             printf("\n\n(C)Literature, Peace and Economics\t\t(D)All of the above");
             ans=toupper(getch());
             if(ans=='D')
             {
                 printf("\n\n\t\t\t[Correct!!]");
                 scr2=scr2+4;
                 printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
             }
             else// if(ans=='A'||ans=='B'||ans=='C')
             {
                    printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                    printf("\n\tQuestion passed to TEAM C");
                    printf("\n\nFor which of the following disciplines is Nobel Prize awarded?");
                    printf("\n\n(A)Physics and Chemistry\t\t\t(B)Physiology or Medicine");
                    printf("\n\n(C)Literature, Peace and Economics\t\t(D)All of the above");
                    ans=toupper(getch());
                    if(ans=='D')
                    {
                      printf("\n\n\t\t\t[Correct!!]");
                      scr3=scr3+2;
                      printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                    }
                    else// if(ans=='A'||ans=='B'||ans=='C')
                    {
                    printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                    printf("\n\tQuestion passed to TEAM A");
                    printf("\n\nFor which of the following disciplines is Nobel Prize awarded?");
                    printf("\n\n(A)Physics and Chemistry\t\t\t(B)Physiology or Medicine");
                    printf("\n\n(C)Literature, Peace and Economics\t\t(D)All of the above");
                    ans=toupper(getch());
                        if(ans=='D')
                        {
                        printf("\n\n\t\t\t[Correct!!]");
                        scr1++;
                        printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
                        }
                        else //if(ans=='A'||ans=='B'||ans=='C')
                        {
                        printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                        printf("\n\t\t\tQuestion terminated. \n\t\t\tRight answer is (D).");
                        }
                   }
             }
             //else
               // printf("invalid answer");

            // system("cls");
//ROUND 1 QUESTION 1 C
             printf("\n\n\n\n\t\t\tTEAM C");
             printf("\n\n\t Hitler party which came into power in 1933 is known as");
             printf("\n\n\t\t(A)Labour Party\t\t\t(B)Nazi Party");
             printf("\n\n\t\t(C)Ku-Klux-Klan\t\t\t(D)Democratic Party");
             ans=toupper(getch());
             if (ans=='B')
             {
                 printf("\n\n\t\t\t[Correct!!]");
                 scr3=scr3+4;
                 printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
             }
             else// if(ans=='A'||ans=='C'||ans=='D')
             {
                 printf("\n\n\n\t\t\t\t[Wrong!!]");
                 printf("\n\n\tQuestion passed to TEAM A.");
                 printf("\n\n\t Hitler party which came into power in 1933 is known as");
                 printf("\n\n\t\t(A)Labour Party\t\t\t(B)Nazi Party-");
                 printf("\n\n\t\t(C)Ku-Klux-Klan\t\t\t(D)Democratic Party");
                 ans=toupper(getch());
                     if (ans=='B')
                     {
                         printf("\n\n\t\t\t[Correct!!]");
                         scr1=scr1+2;
                         printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
                     }
                     else// if(ans=='A'||ans=='C'||ans=='D')
                     {
                         printf("\n\n\n\t\t\t\t[Wrong!!]");
                         printf("\n\n\tQuestion passed to TEAM B.");
                         printf("\n\n\t Hitler party which came into power in 1933 is known as");
                         printf("\n\n\t\t(A)Labour Party\t\t\t(B)Nazi Party-");
                         printf("\n\n\t\t(C)Ku-Klux-Klan\t\t\t(D)Democratic Party");
                         ans=toupper(getch());
                         if (ans=='B')
                         {
                         printf("\n\n\t\t\t[Correct!!]");
                         scr2++;
                         printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                         }
                         else// if(ans=='A'||ans=='C'||ans=='D')
                         {
                         printf("\n\n\n\t\t\t\t[Wrong!!]");
                         printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(B).");
                         }
                     }
             }

//ROUND 1 QUESTION 2 A
             printf("\n\n\n\n\n\t\t\t\t\tTEAM A");
             printf(" \n\n\tThe 'Black flag' signifies-");
             printf("\n\n\t\t(A)revolution/danger\t\t(B)peace");
             printf("\n\n\t\t(C)protest\t\t\t(D)truce");
             ans=toupper(getch());
             if(ans=='C')
             {
                  printf("\n\n\n\t\t\t\t[Correct!!]");
                  scr1=scr1+4;
                  printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
             }
             else// if(ans=='A'||ans=='B'|| ans=='D')
             {
                  printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                  printf("\n\n\tQuestion passed to TEAM B.");
                  printf(" \n\n\tThe 'Black flag' signifies-");
                  printf("\n\n\t\t(A)revolution/danger\t\t(B)peace");
                  printf("\n\n\t\t(C)protest\t\t\t(D)truce");
                  ans=toupper(getch());
                   if(ans=='C')
                   {
                     printf("\n\n\t\t\t[Correct!!]");
                     scr2=scr2+2;
                     printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                   }
                   else// if(ans=='A'||ans=='B'|| ans=='D')
                   {
                       printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                       printf("\n\n\tQuestion passed to TEAM C.");
                       printf(" \n\n\tThe 'Black flag' signifies-");
                       printf("\n\n\t\t(A)revolution/danger\t\t(B)peace");
                       printf("\n\n\t\t(C)protest\t\t\t(D)truce");
                       ans=toupper(getch());
                       if(ans=='C')
                        {
                        printf("\n\n\t\t\t[Correct!!]");
                        scr3++;
                        printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                        }
                       else// if(ans=='A'||ans=='C'||ans=='D')
                        {
                         printf("\n\n\n\t\t\t\t[Wrong!!]");
                         printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(C).");
                        }
                   }
             }
//ROUND 1 QUESTION 2 B
             printf("\n\n\n\n\t\t\t\t\tTEAM B");
             printf("\n\n\t Which is the largest bilateral donor to Nepal?");
             printf("\n\n\t(A)Japan-\t\t\t(B)USA");
             printf("\n\n\t(C)China\t\t\t(D)Africa");
             ans=toupper(getch());
             if(ans=='A')
             {
                  printf("\n\n\t\t\t\t[Correct!!]");
                  scr2=scr2+4;
                  printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
             }
             else
             {
                  printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                  printf("\n\n\tQuestion passed to TEAM C.");
                  printf("\n\n\t Which is the largest bilateral donor to Nepal?");
                  printf("\n\n\t(A)Japan-\t\t\t(B)USA");
                  printf("\n\n\t(C)China\t\t\t(D)Africa");
                  ans=toupper(getch());
                  if(ans=='A')
                  {
                      printf("\n\n\n\t\t\t\t[Correct!!]");
                      scr3=scr3+2;
                      printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                  }
                  else
                  {
                      printf("\n\n\n\t\t\t\t[Wrong!!]\n");
                      printf("\n\n\tQuestion passed to TEAM A.");
                      printf("\n\n\t Which is the largest bilateral donor to Nepal?");
                      printf("\n\n\t(A)Japan-\t\t\t(B)USA");
                      printf("\n\n\t(C)China\t\t\t(D)Africa");
                      ans=toupper(getch());
                      if(ans=='A')
                      {
                        printf("\n\n\n\t\t\t\t[Correct!!]");
                        scr1++;
                        printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);

                      }
                      else// if(ans=='A'||ans=='C'||ans=='D')
                      {
                        printf("\n\n\n\t\t\t\t[Wrong!!]");
                        printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(A).");
                      }
                  }
             }

//ROUND 1 QUESTION 2 C
             printf("\n\n\t\t\t\t\tTEAM C");
             printf("\n\n\t Which is the largest state in America?");
             printf("\n\n\t(A)Alaska-\t\t\t(B)Texas");
             printf("\n\n\t(C)California\t\t\t(D)Montana");
             ans=toupper(getch());
             if(ans=='A')
             {
                printf("\n\n\n\t\t\t\t[Correct!!]");
                scr3=scr3+4;
                printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
             }
             else// if(ans=='A'||ans=='C'||ans=='D')
             {
                printf("\n\n\n\t\t\t[Wrong!!]");
                printf("\n\n\tQuestion passed to TEAM A.");
                printf("\n\n\t Which is the largest state in America?");
                printf("\n\n\t(A)Alaska-\t\t\t(B)Texas");
                printf("\n\n\t(C)California\t\t\t(D)Montana");
                ans=toupper(getch());
                if(ans=='A')
                {
                    printf("\n\n\t\t\t\t[Correct!!]");
                    scr1=scr1+2;
                    printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
                }
                else// if(ans=='A'||ans=='C'||ans=='D')
                {
                    printf("\n\n\n\t\t\t[Wrong!!]");
                    printf("\n\n\tQuestion passed to TEAM B.");
                    printf("\n\n\t Which is the largest state in America?");
                    printf("\n\n\t(A)Alaska-\t\t\t(B)Texas");
                    printf("\n\n\t(C)California\t\t\t(D)Montana");
                    ans=toupper(getch());
                    if(ans=='A')
                    {
                    printf("\n\n\t\t\t[Correct!!]");
                    scr2=scr2+1;
                    printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                    }
                    else
                    {
                        printf("\n\n\n\t\t\t\t[Wrong!!]");
                        printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(A).");
                    }
                }
             }
             printf("\n\n\n\n\t\t\t\tROUND 1 SCORE\n\n");
             printf("\n\n\tTEAM A:\tSCORE:\t%d",scr1);
             printf("\n\n\tTEAM B:\tSCORE:\t%d",scr2);
             printf("\n\n\tTEAM C:\tSCORE:\t%d",scr3);

//ROUND 2 QUESTION 1 A
             printf("\n\n\n\n\n\t\t\t\tROUND 2\n\n");
             printf("\n\n\n\t\t\t\tTEAM A");
             printf("\n\n\t Which planet's ring system can be easily observed from the earth?");
             printf("\n\n\t(A)Jupiter\t\t\t(B)Venus");
             printf("\n\n\t(C)Uranus\t\t\t(D)Saturn-");
             ans=toupper(getch());
             if(ans=='D')
             {
                printf("\n\n\t\t\t[Correct!!]");
                scr1=scr1+4;
                printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
             }
             else// if(ans=='A'||ans=='C'||ans=='D')
             {
                  printf("\n\n\n\t\t\t\t[Wrong!!]");
                  printf("\n\n\tQuestion passed to TEAM B.");
                  printf("\n\n\t Which planet's ring system can be easily observed from the earth?");
                  printf("\n\n\t(A)Jupiter\t\t\t(B)Venus");
                  printf("\n\n\t(C)Uranus\t\t\t(D)Saturn-");
                  ans=toupper(getch());
                  if(ans=='D')
                  {
                    printf("\n\n\t\t\t[Correct!!]");
                    scr2=scr2+2;
                    printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                  }
                  else// if(ans=='A'||ans=='C'||ans=='D')
                   {
                    printf("\n\n\n\t\t\t\t[Wrong!!]");
                    printf("\n\n\tQuestion passed to TEAM C.");
                    printf("\n\n\t Which planet's ring system can be easily observed from the earth?");
                    printf("\n\n\t(A)Jupiter\t\t\t(B)Venus");
                    printf("\n\n\t(C)Uranus\t\t\t(D)Saturn-");
                    ans=toupper(getch());
                    if(ans=='D')
                      {
                        printf("\n\n\t\t\t[Correct!!]");
                        scr3=scr3+1;
                        printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                      }
                    else// if(ans=='A'||ans=='C'||ans=='D')
                      {
                        printf("\n\n\n\t\t\t\t[Wrong!!]");
                        printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(D).");
                      }
                  }
             }


 //ROUND 2 QUESTION 2 B
             printf("\n\n\n\t\t\t\tTEAM B");
             printf("\n\n\tWho was the first man to fly into space?");
             printf("\n\n\t(A)Yuri Gagarin(Russia)-\t\t\t(B)Rakesh Sharma(India)");
             printf("\n\n\t(C)Neil Alden Armstrong(U.S.A)\t\t\t(D)Michael Collins(U.S.A)");
             ans=toupper(getch());
             if(ans=='A')
             {
                printf("\n\n\t\t\t[Correct!!]");
                scr2=scr2+4;
                printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
             }
             else// if(ans=='A'||ans=='C'||ans=='D')
             {
                  printf("\n\n\n\t\t\t\t[Wrong!!]");
                  printf("\n\n\tQuestion passed to TEAM C.");
                  printf("\n\n\tWho was the first man to fly into space?");
                  printf("\n\n(A)Yuri Gagarin(Russia)-\t\t\t(B)Rakesh Sharma(India)");
                  printf("\n\n(C)Neil Alden Armstrong(U.S.A)\t\t\t(D)Michael Collins(U.S.A)");
                  ans=toupper(getch());
                  if(ans=='A')
                   {
                      printf("\n\n\n\t\t\t\t[Correct!!]");
                      scr3=scr3+2;
                      printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                   }
                   else// if(ans=='A'||ans=='C'||ans=='D')
                   {
                      printf("\n\n\n\t\t\t\t[Wrong!!]");
                      printf("\n\n\tQuestion passed to TEAM A.");
                      printf("\n\n\tWho was the first man to fly into space?");
                      printf("\n\n(A)Yuri Gagarin(Russia)-\t\t\t(B)Rakesh Sharma(India)");
                      printf("\n\n(C)Neil Alden Armstrong(U.S.A)\t\t\t(D)Michael Collins(U.S.A)");
                      ans=toupper(getch());
                    if(ans=='A')
                          {
                           printf("\n\n\t\t\t\t[Correct!!]");
                           scr1=scr1+2;
                           printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
                          }
                    else
                          {
                           printf("\n\n\n\t\t\t\t[Wrong!!]");
                           printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(A).");
                          }
                   }
             }

  //ROUND 2 QUESTION 1 C
             printf("\n\n\n\t\t\t\tTEAM C");
             printf("\n\n\tWhich is the smallest country in the world?");
             printf("\n\n\t(A)Vatican-\t\t\t(B)Monaco");
             printf("\n\n\t(C)Nauru\t\t\t(D)San Marino");
             ans=toupper(getch());
             if(ans=='A')
             {
                printf("\n\n\t\t\t[Correct!!]");
                scr3=scr3+4;
                printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
             }
             else// if(ans=='A'||ans=='C'||ans=='D')
             {
                 printf("\n\n\n\t\t\t\t[Wrong!!]");
                 printf("\n\n\tQuestion passed to TEAM A.");
                 printf("\n\n\tWhich is the smallest country in the world?");
                 printf("\n\n\t(A)Vatican-\t\t\t(B)Monaco");
                 printf("\n\n\t(C)Nauru\t\t\t(D)San Marino");
                 ans=toupper(getch());
                 if(ans=='A')
                 {
                    printf("\n\n\t\t\t[Correct!!]");
                    scr1=scr1+2;
                    printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
                 }
                 else// if(ans=='A'||ans=='C'||ans=='D')
                 {
                    printf("\n\n\n\t\t\t\t[Wrong!!]");
                    printf("\n\n\tQuestion passed to TEAM B.");
                    printf("\n\n\tWhich is the smallest country in the world?");
                    printf("\n\n\t(A)Vatican-\t\t\t(B)Monaco");
                    printf("\n\n\t(C)Nauru\t\t\t(D)San Marino");
                    ans=toupper(getch());
                    if(ans=='A')
                      {
                          printf("\n\n\t\t\t[Correct!!]");
                          scr2=scr2+1;
                          printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                      }
                    else
                      {
                           printf("\n\n\n\t\t\t\t[Wrong!!]");
                           printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(A).");
                      }
                 }
             }

  //ROUND 2 QUESTION 2 A
            printf("\n\n\n\t\t\t\tTEAM A");
            printf("\n\n\tThe World Largest desert is ?");
            printf("\n\n\t(A) Thar \t\t\t(B) Kalahari");
            printf("\n\n\t(C) Sahara\t\t\t(D) Sonoran");
            ans=toupper(getch());
            if(ans=='C')
            {
               printf("\n\n\t\t\t[Correct!!]");
               scr1=scr1+4;
               printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
            }
            else// if(ans=='A'||ans=='C'||ans=='D')
            {
                 printf("\n\n\n\t\t\t\t[Wrong!!]");
                 printf("\n\n\tQuestion passed to TEAM B.");
                 printf("\n\n\t(A) Thar \t\t\t(B) Kalahari");
                 printf("\n\n\t(C) Sahara\t\t\t(D) Sonoran");
                 ans=toupper(getch());
                 if(ans=='C')
                 {
                   printf("\n\n\t\t\t[Correct!!]");
                   scr2=scr2+2;
                   printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                 }
                 else// if(ans=='A'||ans=='C'||ans=='D')
                 {
                   printf("\n\n\n\t\t\t\t[Wrong!!]");
                   printf("\n\n\tQuestion passed to TEAM C.");
                   printf("\n\n\t(A) Thar \t\t\t(B) Kalahari");
                   printf("\n\n\t(C) Sahara\t\t\t(D) Sonoran");
                   ans=toupper(getch());
                   if(ans=='C')
                   {
                           printf("\n\n\t\t\t[Correct!!]");
                           scr3=scr3+1;
                           printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                   }
                   else
                   {
                           printf("\n\n\n\t\t\t\t[Wrong!!]");
                           printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(C).");
                   }
                 }
             }
 //ROUND 2 QUESTION 2 B
             printf("\n\n\n\t\t\t\tTEAM B");
             printf("\n\n\tHow many stars are there in our solar system?");
             printf("\n\n\t(A)9\t\t\t(B)8");
             printf("\n\n\t(C)1-\t\t\t(D)none");
             ans=toupper(getch());
             if(ans=='C')
            {
                   printf("\n\n\t\t\t[Correct!!]");
                   scr2=scr2+4;
                   printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
            }
            else// if(ans=='A'||ans=='C'||ans=='D')
            {
                   printf("\n\n\n\t\t\t\t[Wrong!!]");
                   printf("\n\n\tQuestion passed to TEAM C.");
                   printf("\n\n\tHow many stars are there in our solar system?");
                   printf("\n\n\t(A)9\t\t\t(B)8");
                   printf("\n\n\t(C)1-\t\t\t(D)none");
                   ans=toupper(getch());
                   if(ans=='C')
                    {
                       printf("\n\n\t\t\t[Correct!!]");
                       scr3=scr3+2;
                       printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                    }
                    else// if(ans=='A'||ans=='C'||ans=='D')
                    {
                       printf("\n\n\n\t\t\t\t[Wrong!!]");
                       printf("\n\n\tQuestion passed to TEAM A.");
                       printf("\n\n\tHow many stars are there in our solar system?");
                       printf("\n\n\t(A)9\t\t\t(B)8");
                       printf("\n\n\t(C)1-\t\t\t(D)none");
                       ans=toupper(getch());
                       if(ans=='C')
                       {
                       printf("\n\n\t\t\t[Correct!!]");
                       scr1=scr1+1;
                       printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
                       }
                       else
                       {
                           printf("\n\n\n\t\t\t\t[Wrong!!]");
                           printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(C).");
                       }
                    }
                 }
 //ROUND 2 QUESTION 2 C
                 printf("\n\n\n\t\t\t\tTEAM C");
                 printf("\n\n\tLargest living creature in the world?");
                 printf("\n\n\t\t(A)Elephant\t\t\t(B)Giraffe");
                 printf("\n\n\t\t(C)Blue Whale-\t\t\t(D)Camel");
                 ans=toupper(getch());
                 if(ans=='C')
                 {
                   printf("\n\n\t\t\t[Correct!!]");
                   scr3=scr3+4;
                   printf("\n\n\t\t\tScore  TEAM C:\t%d",scr3);
                 }
                else// if(ans=='A'||ans=='C'||ans=='D')
                 {
                   printf("\n\n\n\t\t\t\t[Wrong!!]");
                   printf("\n\n\tQuestion passed to TEAM A.");
                   printf("\n\n\tLargest living creature in the world?");
                   printf("\n\n\t\t(A)Elephant\t\t\t(B)Giraffe");
                   printf("\n\n\t\t(C)Blue Whale-\t\t\t(D)Camel");
                   ans=toupper(getch());
                   if(ans=='C')
                   {
                       printf("\n\n\t\t\t[Correct!!]");
                      scr1=scr1+2;
                      printf("\n\n\t\t\tScore  TEAM A:\t%d",scr1);
                   }
                    else// if(ans=='A'||ans=='C'||ans=='D')
                   {
                      printf("\n\n\n\t\t\t\t[Wrong!!]");
                      printf("\n\n\tQuestion passed to TEAM B.");
                      printf("\n\n\tLargest living creature in the world?");
                      printf("\n\n\t\t(A)Elephant\t\t\t(B)Giraffe");
                      printf("\n\n\t\t(C)Blue Whale-\t\t\t(D)Camel");
                      ans=toupper(getch());
                      if(ans=='C')
                      {
                       printf("\n\n\t\t\t[Correct!!]");
                       scr2=scr2+1;
                       printf("\n\n\t\t\tScore  TEAM B:\t%d",scr2);
                      }
                      else
                      {
                           printf("\n\n\n\t\t\t\t[Wrong!!]");
                           printf("\n\n\t\t\tQuestion terminated.\n\t\t\tRight answer is(C).");
                      }
                    }
                 }
             printf("\n\n\n\n\t\t\t\tROUND 2 SCORE\n\n");
             printf("\n\n\tTeam A:\tSCORE:\t%d",scr1);
             printf("\n\n\tTeam B:\tSCORE:\t%d",scr2);
             printf("\n\n\tTeam C:\tSCORE:\t%d",scr3);

           if(scr1>scr2&&scr1>scr3)
           {
               printf("\n\n\n\t\tCONGRATS!!\nTEAM A IS WINNER!!");
           }
           else if(scr2>scr3&&scr2>scr1)
           {
               printf("\n\n\n\t\tCONGRATS!!\nTEAM B IS WINNER!!");
           }
           else if(scr3>scr1&&scr3>scr2)
           {
               printf("\n\n\n\t\tCONGRATS!!\nTEAM C IS WINNER!!");
           }
           else if(scr1==scr2&&scr2==scr3&&scr1==scr3)
           {
               if(scr1==0)
               {
                   printf("\n\n\n\t\tALL LOST THE GAME!!");
               }
               else
               {
                  printf("\n\n\n\t\tCONGRATS!!\nTEAM A, TEAM B AND TEAM C HAD DRAW!!");
               }
           }
           else if(scr1==scr2)
           {
               printf("\n\n\n\t\tCONGRATS!!\nTEAM A AND TEAM B HAD DRAW!!");
           }
           else if(scr3==scr2)
           {
               printf("\n\n\n\t\tCONGRATS!!\nTEAM B AND TEAM C HAD DRAW!!");
           }
           else if(scr3==scr1)
           {
                printf("\n\n\n\t\tCONGRATS!!\nTEAM A AND TEAM C HAD DRAW!!");
           }
           else
           {
               printf("\n\n\n\n\t\t\tDEFAULT!!");
           }


 }
void help()
{
    char ch;
    printf("\n\n\n\t\t\tWELCOME TO QUIZ!!!");
    printf("\n\n\t\tInstruction:\n");
    printf("\n\n1>  This game is played among 3 teams i.e. Team A, Team B and Team C.");
    printf("\n\n2>  It has three rounds with 3 questions for each team in each round.");
    printf("\n\n3>  If a team enters right answer, score is increased by 4.");
    printf("\n\n4>  For wrong answer, the question is passed to another team.");
    printf("\n\n5>  If a team enters right answer for passed question, score is increased by 2.");
    printf("\n\n6>  If the question is passed again to third team, score is increased by 1. ");
    printf("\n\n7>  If none of the teams can answer a question, the question is terminated.");
    printf("\n\n8>  The team with highest score at the end of the game is winner.");
    printf("\n\n\n\t\t\tBEST OF LUCK!!!");
    printf("\n\t\t\tHOPE YOU ENJOY THE GAME!!");
    printf("\n\t\t\t\tPress any key to go back to main menu.");
    printf("\n\t\t\t\tEnter 'Q' to quit the game.");
    ch=toupper(getch());
    if(ch =='Q')
            exit(1);
}
