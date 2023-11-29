#include<stdio.h>
#include<windows.h>
int main()
{
    int correct_answer=0,wrong_answer=0,a;
    printf("WELCOME :)\n");
    printf("Do you want to play?If yes then click 1 else 0....\n");
    int play;
    scanf("%d",&play);
    if(play==1)
    {
        printf("Lets start. . .\n");

        system("cls");

        a=Question1();
        if(a==1)
        {
            correct_answer++;
        }else
        {
            wrong_answer++;
        }

        //2

        a=Question2();
        if(a==1)
        {
            correct_answer++;
        }else
        {
            wrong_answer++;
        }

        //3
        a=Question3();
        if(a==1)
        {
            correct_answer++;
        }else
        {
            wrong_answer++;
        }

        //4

        a=Question4();
        if(a==1)
        {
            correct_answer++;
        }else
        {
            wrong_answer++;
        }
        //5

        a=Question5();
        if(a==1)
        {
            correct_answer++;
        }else
        {
            wrong_answer++;
        }

        //result
        result(correct_answer,wrong_answer);
        printf("Correct answer:%d\t\t",correct_answer);
        printf("Wrong answer:%d",wrong_answer);

        again();


    }else
    {
        printf("Come back again. Thank you....  :)\n");
    }

    return 0;
}

void again()
{
    printf("\n\nDo you want to play again? Yes 1 or no 0.....\n");
    int a;
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        main();

    }else
    {
        printf("Thank you for playing....\n");
    }
}


void result(int c,int w){
    system("cls");
        printf("Correct answer:%d\t\t",c);
        printf("Wrong answer:%d",w);
}
int Question1()
{
   printf("Question 1: Who is father of c language?\n");
        printf("a. Bjarne Stroustrup\n");
        printf("b. James A. Gosling\n");
        printf("c. Dennis Ritchie\n");
        printf("d. Dr. E.F. Codd\n\n");

        char c;

        printf("Answer:");
        scanf(" %c",&c);

        printf("\n\n");
        if(c=='c')
        {
            printf("Correct Answer...\n\n");
            return 1;

        }else{
            printf("Wrong Answer!...\n\n");
            return 0;
        }
}


int Question2()
{
   printf("Question 2: C Language developed at ________?\n");
        printf("a. AT & T's Bell Laboratories of USA in 1972\n");
        printf("b. AT & T's Bell Laboratories of USA in 1970\n");
        printf("c. Sun Microsystems in 1973\n");
        printf("d. Cambridge University in 1972\n\n");

        char c;

        printf("Answer:");
        scanf(" %c",&c);

        printf("\n\n");
        if(c=='a')
        {
            printf("Correct Answer...\n\n");
            return 1;

        }else{
            printf("Wrong Answer!...\n\n");
            return 0;
        }
}

int Question3()
{
   printf("Question 3: C was primarily developed as ________?\n");
        printf("a. System programming language\n");
        printf("b. General purpose language\n");
        printf("c. Data processing language\n");
        printf("d. None of the above\n\n");

        char c;

        printf("Answer:");
        scanf(" %c",&c);

        printf("\n\n");
        if(c=='a')
        {
            printf("Correct Answer...\n\n");
            return 1;

        }else{
            printf("Wrong Answer!...\n\n");
            return 0;
        }
}

int Question4()
{
   printf("Question 4: Standard ANSI C recognizes ________ number of keywords?\n");
        printf("a. 30\n");
        printf("b. 10\n");
        printf("c. 42\n");
        printf("d. 32\n\n");

        char c;

        printf("Answer:");
        scanf(" %c",&c);

        printf("\n\n");
        if(c=='d')
        {
            printf("Correct Answer...\n\n");
            return 1;

        }else{
            printf("Wrong Answer!...\n\n");
            return 0;
        }
}
int Question5()
{
   printf("Question 5: A C variable cannot start with\n");
        printf("a. A number\n");
        printf("b. A special symbol other than underscore\n");
        printf("c. Both of the above\n");
        printf("d. An alphabetn\n");

        char c;

        printf("Answer:");
        scanf(" %c",&c);

        printf("\n\n");
        if(c=='c')
        {
            printf("Correct Answer...\n\n");
            return 1;

        }else{
            printf("Wrong Answer!...\n\n");
            return 0;
        }
}
void gotoxy(int a,int b)
{
    COORD c;
    c.X=a;
    c.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}