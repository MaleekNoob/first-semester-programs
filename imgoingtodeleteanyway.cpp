/*
Name: Maleek Hussain Ali
Roll number: 22i-1526
Section: SE-B
*/

#include<iostream>
#include<ctime>   // standard library to use time functions
#include<cstdlib>
using namespace std;

int isTheAnswerRightOrNot(float&);

int pricePerQuestion(bool, int&);

int money(int);

void science();

void sport();

void popCulture();

void history();

void validation(char&);

int main()
{
    float reward = 0, probability = 50;
    int count = 0, category;
    char answer;
    bool probable;
    cout << "\n*************************************WELCOME TO THE SHOW***********************************\nInput your answers in True (T) or False (F)\nGoodluck\n";
    for(int i = 0; i < 15; i++)
    {
        cout << "\nRound " << (i+1);
        srand(time(NULL));
        category = ((rand() % 4) + 1);        //selection of category
        switch(category)
        {
            case 1:
                science();
                break;

            case 2:
                popCulture();
                break;
            
            case 3:
                history();
                break;
            
            case 4:
                sport();
                break;

            default:
                exit(1);
                break;
        }
        cin >> answer;
        validation(answer);
        probable = isTheAnswerRightOrNot(probability);
        reward += pricePerQuestion(probable, count);   //count argument is passed to count total number of correct answers
        if(probability <= 20)
            break;
    }
    cout << "\nTotal money you made is: " << reward;
    cout << "\nYou answered " << count << " questions correctly!";
    return 0;
}

void science()
{
    //srand(time(NULL));
    int questionNumber = ((rand() % 10) + 1);
    switch(questionNumber)
    {
        case 1:
            cout << "\nElectrons are larger than molecules?";
            break;
        case 2:
            cout << "\nThe chemical make up food often changes when you cook it?";
            break;
        case 3:
            cout << "\nSharks are mammals?";
            break;
        case 4:
            cout << "\nThe human body has four lungs?";
            break;
        case 5:
            cout << "\n Venus is the closest planet to the Sun?";
            break;
        case 6:
            cout << "\nConductors have low resistance?";
            break;
        case 7:
            cout << "\nMolecules can have atoms from more than one chemical element?";
            break;
        case 8:
            cout << "\nThe human skeleton is made up of less than 100 bones?";
            break;
        case 9:
            cout << "\nAtomic bombs work by atomic fission?";
            break;
        case 10:
            cout << "\nFloatation separates mixtures based on density?";
            break;
    }
}

void popCulture()
{
    //srand(time(NULL));
    int questionNumber = ((rand() % 10) + 1);
    switch(questionNumber)
    {
        case 1:
            cout << "\nAtif Aslam won the mega event in dubai 2010?";
            break;
        case 2:
            cout << "\nPop music really started in the South Asian region with the famous playback singer Ahmed Rushdi's song 'Ko Ko Korina' in 1966?";
            break;
        case 3:
            cout << "\nThe Beatles were the first pop musicians to be awarded the MBE.?";
            break;
        case 4:
            cout << "\nThe inventor of Batman also created Superman.?";
            break;
        case 5:
            cout << "\nJohnny Cash recorded his album \"Johnny Cash at Folsom Prison\" at RCA's studios in Nashville, Tennessee.?";
            break;
        case 6:
            cout << "\nThe fictional character Darth Vader is the lead villain in \"Star Trek.\"?";
            break;
        case 7:
            cout << "\nJuno Awards is Italy's music recording industry awards?";
            break;
        case 8:
            cout << "\nAmerican animated movie \"Snow White and the Seven Dwarfs\" is based on a German fairy tale by the Brothers Grimm.?";
            break;
        case 9:
            cout << "\nThe original name of Eminem is Eric Marlon Bishop?";
            break;
        case 10:
            cout << "\nRitz Brothers were an American comedy team of three brothers?";
            break;
    }
}

void history()
{
    //srand(time(NULL));
    int questionNumber = ((rand() % 10) + 1);
    switch(questionNumber)
    {
        case 1:
            cout << "\nThe Hundred Years' War lasted less than 100 years?";
            break;
        case 2:
            cout << "\nKansas was a part of the Confederate States of America during the American Civil War?";
            break;
        case 3:
            cout << "\nBritish Prime Minister Winston Churchill was born before the Leader of the Soviet Union, Joseph Stalin?";
            break;
        case 4:
            cout << "\nFranklin D. Roosevelt was the 32nd President of the United States?";
            break;
        case 5:
            cout << "\nYuri Gagarin became the first human in space in 1961?";
            break;
        case 6:
            cout << "\nA British Prime Minister has never been assassinated?";
            break;
        case 7:
            cout << "\nSubmarines were used during the American Civil War?";
            break;
        case 8:
            cout << "\nThe First World War began on the 1st September 1914?";
            break;
        case 9:
            cout << "\nKing George IV of the United Kingdom was not born in the United Kingdom.?";
            break;
        case 10:
            cout << "\nThe population of the world at the beginning of the 20th Century is estimated to have been about 1.7 billion.?";
            break;
    }
}

void sport()
{
    //srand(time(NULL));
    int questionNumber = ((rand() % 10) + 1);
    switch(questionNumber)
    {
        case 1:
            cout << "\nA golf ball is the fastest recorded object in sports?";
            break;
        case 2:
            cout << "\nPaul Gascoigne has won the BBC Sports Personality of the Year Award?";
            break;
        case 3:
            cout << "\nCheetahs were raced at Romford Greyhound Stadium in 1937 in an effort to increase attendances?";
            break;
        case 4:
            cout << "\nSue Barker has won a tennis Grand Slam tournament?";
            break;
        case 5:
            cout << "\nIn the Summer Olympics, Michael Phelps has won more gold medals than the country Greece?";
            break;
        case 6:
            cout << "\nIn cricket, a score of '111' is referred to as a Nelson?";
            break;
        case 7:
            cout << "\nJuventus have played in black and white stripes ever since Notts County supplied them with a set of their black-and-white striped shirts?";
            break;
        case 8:
            cout << "\nFatima Whitbread won the gold medal at the 1984 Summer Olympics in Los Angeles?";
            break;
        case 9:
            cout << "\nPeter Shilton made his debut in senior professional football in 1974?";
            break;
        case 10:
            cout << "\nLeicester won the Premier League in the 2016-17 season?";
            break;
    }
}

int isTheAnswerRightOrNot(float& probability)
{
    //srand(time(NULL));
    if((rand() % 100) < probability)
    {
        probability *= 0.9;   //decrement of 10%
        return true;
    }
    return false;
}

int pricePerQuestion(bool probable, int& count)
{

    if(probable == 1)
        count++;
    return (probable * money(count));
}

void validation(char& answer)
{
    while((answer != 't') && (answer != 'T') && (answer != 'f') && (answer != 'F'))
    {
        cout << "\nYou entered invalid input \nPlease enter your answer in (T or F): ";
        cin >> answer;
    }
}

int money(int i)
{
    if((i >= 0) && (i <= 3))
        return 100;
    else if((i >= 4) && (i <= 6))
        return 1000;
    else if((i >= 7) && (i <= 10))
        return 10000;
    else if((i >= 10) && (i <= 15))
        return 15000;
    else
        return 0;
}
