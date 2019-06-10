#include <stdio.h>
#include <string.h>

int main ()
{
  int score= 0;
  char input [200];
  char name [200];
  char A1astr[] = "exposition";
  char A1bstr[20];
  char Q2answer[200];
  char Q2hint[20] = "hint";
  char Q2answer2[50];
  char yesstr[5] = "yes";
  char baroquestr[10] = "Baroque";
  char classicalstr[10] = "Classical";
  char Q3aanswer[] = "True";
  char Q3banswer[10];
  int loopnum = 1;
  int Q2num;

  printf("What is your name?\n");
  fgets(input, 200, stdin);
  sscanf(input, "%s", &name);

  printf("\nQ1: What is the name of the first section of a sonata?\n");
  fgets(input, 200, stdin);
  sscanf(input, "%s", &A1bstr);
  if (strcmp(A1astr, A1bstr) == 0)
    {
	score = score + 1;
	printf("%d\n", score);
    }

  printf("\nQ2: Do you know the first two main musical periods? If so, enter yes. If not, enter hint\n");
	fgets(input, 200, stdin);
	sscanf(input, "%s", &Q2answer);
    if (strcmp(Q2answer, Q2hint) == 0)
      {
        printf("\nThe first two main musical periods are Baroque and Classical. Choose a musical period\n");
        fgets(input, 200, stdin);
        sscanf(input, "%s", &Q2answer2);
      }
    else if (strcmp(Q2answer, yesstr) == 0)
      {
        score = score +1;
	printf("%d\n", score);
        printf("\nGood job! Name one of the first two main musical periods(be sure to use capitals)\n");
        fgets(input, 200, stdin);
        sscanf(input, "%s", &Q2answer2);
        
        while (loopnum < 2)
        {
          if ((strcmp(Q2answer2,baroquestr) == 0) || (strcmp(Q2answer2,classicalstr) == 0))
          {
            loopnum = loopnum + 1;
            printf("\nGood job!\n");
            score = score +1;
	     printf("%d\n", score);
          }
          
        else if (strcmp(Q2answer2,baroquestr) != 0)
            {
              printf("Try again. Make sure to use proper spelling\n");
              fgets(input, 200, stdin);
              sscanf(input, "%s", &Q2answer2);
            }
          else if (strcmp(Q2answer2,classicalstr) != 0)
            {
              printf("Try again. Make sure to use proper spelling\n");
              fgets(input, 200, stdin);
              sscanf(input, "%s", &Q2answer2);
            }
        }
      }

    printf("Around how many years did this musical era last?\n");
    fgets(input, 200, stdin);
    sscanf(input, "%d", &Q2num);
    printf("%d\n", Q2num);

      if (strcmp(Q2answer2,baroquestr) == 0 && Q2num == 1500)
        {
          score = score + 1;
        }
      if (strcmp(Q2answer2, classicalstr) == 0 && Q2num == 900)
        {
          score = score + 1;
        }
      else
        {
          printf("Incorrect\n");
        }


  printf("Q3: True or False: Scarlatti was a Baroque composer.\n");
    fgets(input, 200, stdin);
    sscanf (input,"%s", &Q3aanswer);

    if (strcmp(Q3aanswer, Q3banswer) == 0)
     {
	 score = score + 1;
       	printf("%d\n", score);
      }
    else
      {
	printf("Incorrect\n");
      }

	FILE *fptr;
	
	fptr = fopen("scorefile.out", "w");
	if (fptr == NULL)
	{
		printf("can't open file\n");
		return 1;
	}

	fprintf(fptr,"Your score is %d\n", score);	
	fclose(fptr);

        printf("Go to this website to check your score: http://rpi12/sp2a/scorefile.out \n");
}

