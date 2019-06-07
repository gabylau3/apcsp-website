#include <stdio.h>
#include <string.h>

int main ()
{
        int score= 0;
        char input [200];
        char name [200];
        char A1astr[20] = "exposition";
        char A1bstr[20];
	char Q2answer[200];
	char Q2hint = "hint";
	char Q2answer2[50];
        int Answer;

        printf("What is your name?\n");
        fgets(input, 200, stdin);
        sscanf(input, "%s", &name);

        printf("Q1: What is the name of the first section of a sonata?\n");
        fgets(input, 200, stdin);
        sscanf(input, "%s", &A1bstr);
        if (strcmp(A1astr, A1bstr) == 0)
                score = score + 1;

        printf("Q2: Choose a musical period. If you do not know any, enter hint\n");
	fgets(input, 200, stdin);
	sscanf(input, "%s", &Q2answer);
	if (strcmp(Q2answer, Q2hint) == 0)
		printf("The musical period are Baroque, Classical, Romantic, Impressionist, and Contemporary. Choose a musical period\n");
		fgets(input, 200, stdin);
		sscanf(input, "%s", &Q2answer2);

		printf("Choose a number between 3 and 5\n");

        printf("Q3: There must be at least twice as many trumpets as trombones. There are 12 trombones. How many trumpets could the band have?\n");
        fgets(input, 200, stdin);
        if (sscanf(input, "%d", &Answer) >= 24)
                score = score + 1;


	FILE *fptr;
	
	fptr = fopen("scorefile.out", "w");
	if (fptr == NULL)
	{
		printf("can't open file\n");
		return 1;
	}

	fprintf(fptr,"Your score is %d\n", score);
	
	
	
	fclose(fptr);

        printf("Go to this website to check your score and compare it to oth\n");

	


}


