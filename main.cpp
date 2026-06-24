#include <iostream>
using namespace std;


int main ()
{
    string questions[] = {"QUESTION 1\n"

                          "\nSuppose the following declarations appear in a C++ program: \n "

                           "\nfloat amount, forWaiter\n"
                           "char service"

                           "\nIf the following function header is given:\n"
                           
                           "\nfloat tip(float amountP, char serviceP)\n"

                           "\nwhich of the options below is a correct calling statement of the function tip?\n",

                          "\nQUESTION 2\n"

                          "\nSuppose the following declarations appear in a C++ program:\n"
                         
                          "\nfloat afford, amount;\n"
                          "int number;\n"
                          "string name;\n"
                        
                          "\nIf the following function header is given:\n"
                        
                          "void supplyInfo(float affordP, int nrP, string & nameP, float & amountP)\n"
                    
                          "\nwhich of the options below is a correct calling statement of the function supplyInfo?\n",
                        
                          "\nQUESTION 3\n"
                        
                          "\nSuppose the following declarations appear in a C++ program:\n"
                    
                          "\nint age, days;\n"
                          "char grade;\n"
                          "float salary;\n"
                        
                          "\nSuppose the following calling statement appears in the program:\n"
                    
                          "\ninputInfo(35, 'B', salary, days);\n"
                    
                          "\nWhich of the options below is a correct function header of the function inputInfo?\n"};

    string answers[][5] = {{"\n1. forWaiter = tip(float amount, char service);\n",
                            "2. tip(amountP, serviceP);\n",
                            "3. forWaiter = tip(123.66, 'A');\n",
                            "4. forWaiter = tip(amountP, serviceP);\n",
                            "5. None of the above options is a correct calling statement.\n"},
                           {"\n1. supplyInfo(800, 4, \"Beach Hotel\", 789);\n",
                            "2. supplyInfo(800, 4, name, amount);\n",
                            "3. supplyInfo(affordP, nrP, nameP, amountP);\n",
                            "4. supplyInfo(afford, number, \"Beach Hotel\", 789);\n",
                            "5. None of the above options is a correct calling statement.\n"},
                           {"\n1. void inputInfo(int ageP, char gradeP, float & salaryP, int & daysP)\n",
                            "2. void inputInfo(35, 'B', float salaryP, int daysP)\n",
                            "3. void inputInfo(int & age, char & grade, float & salary, int & days)\n",
                            "4. void inputInfo(35, 'B', salary, days)\n",
                            "5. All of the above options are correct function headers.\n"}};

    int correctAnswers[] = {3, 2, 1};

    int sizeQuestionArray = sizeof(questions)/sizeof(questions[0]);
    int guess;
    int score;

    for (int i = 0; i < sizeQuestionArray; i++)
    {
        cout << questions[i];

        for (int j = 0; j < sizeof(answers[i])/sizeof(answers[i][0]); j++)
        {
            cout << answers[i][j];
        }

    
        cout << endl;

        cin >> guess;

        if(isdigit(guess))
        {
            cout << "Guess is '0' to '9'";
        }

        if (guess == correctAnswers[i])
        {
            cout << "\nCorrect";
            score++;
        }
        else
        {
            cout << "\nThe correct answer is ";
        }
    }


    return 0;
}

