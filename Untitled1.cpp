    #include<iostream>
    #include<iomanip>
    #include<windows.h>
    using namespace std;

    void general_function(int, int, int, int, int);

    void structure(int, int, int, int);

    void making_length(int, int, int, int, int);

    void making_height(int, int, int, int, int);

    int main()
    {
        int height, base_pro_max, length, steps;
        cout << "\nEnter number of steps: ";
        cin >> steps;
        cout << "\nEnter height of each step: ";
        cin >> height;
        cout << "\nEnter width: ";
        cin >> length;
        base_pro_max = (length * steps);
        structure(steps, height, length, base_pro_max);
    }

    void general_function(int i, int counter, int height,int length,int base_pro_max)
    {
        int a = (length * counter);
        cout << setw(base_pro_max - a); making_length(a, i, base_pro_max, length, height);
    }

    void structure(int steps, int height, int length, int base_pro_max)
    {
        //char a;
        int i = 35, counter = 1, n = 0;
        int b = (i + steps);
        while(1)
        {
            //a = static_cast<char>(i);
            general_function(i, counter, height, length, base_pro_max);
            counter++;
            i++;
            if(i>=b)
            {
             	i=35;
			}
            if(i>=(b-(1+n))
            {
                //a = static_cast<char>(i);
                general_function(i, counter, height, length, base_pro_max);
                for (int j = 1; j<=base_pro_max; j++)
                {
                    cout << static_cast<char>(i);
                }
                //i++;
                counter=1;
                Sleep(1000);
                n++;
                system("cls");
                continue;
            }
        }
    }

    void making_length(int a, int i, int base_pro_max, int length, int height)
    {
        for (int j=1; j<=length; j++)
        {
            cout << static_cast<char>(i);
        }
        cout << endl;
        making_height(a, i, length, height, base_pro_max);
    }

    void making_height(int a, int i, int length,int height,int base_pro_max)
    {
        for (int j=1; j<=height; j++)
        {
            cout << setw(base_pro_max - a) << static_cast<char>(i) << setw(a-1) << static_cast<char>(i);
            cout << endl;
        }
    }
