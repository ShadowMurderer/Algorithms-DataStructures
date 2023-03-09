#include <iostream>
#include <cstring>
using namespace std;

int length(char input[]) /// Lenght function for character arrays
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void reverse(char input[]) /// Reverse function for character arrays
{
    int start = 0;
    int end = length(input) - 1;

    while (start < end)
    {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}

bool mystrcmp(char name[], char surName[]) /// Function for comparing character arrays
{
    if (strlen(name) != strlen(surName))
        return false;

    for (int i = 0; i < strlen(name) /*(or) name[i] != '\0'*/; i++)
    {
        if (name[i] != surName[i])
            return false;
    }

    return true;
}

void printallprefixes(char name[]) /// Print each character in array, added to the one before, left to right
{
    for (int e = 0; name[e] != '\0'; e++)
    {
        for (int s = 0; s <= e; s++)
        {
            cout << name[s];
        }
        cout << endl;
    }
}

void printallsuffixes(char name[]) /// Print each character in array, added to the one before, roght to left
{
    for (int e2 = strlen(name) - 1; e2 >= 0; e2--)
    {
        for (int s2 = e2; s2 < strlen(name); s2++)
        {
            cout << name[s2];
        }
        cout << endl;
    }
}

int main()
{
    char name[10];
    char surName[10];

    cout << "Please tell us your name" << endl; /// Stores the name and surname
    cin.getline(name, 10);
    cout << "Now your surname" << endl;
    cin.getline(surName, 10);

    cout << "So your name is " << name << endl; /// Outputs the name and surname and the lenght of each
    cout << "And your surname is " << surName << endl;
    cout << "And the lenght of your name is: " << length(name) << " digits" << endl;
    cout << "And the lenght of yout surname is: " << length(surName) << " digits" << endl;

    int len1 = strlen(name); /// Finds out the number of characters stored
    int len2 = strlen(surName);
    cout << "Lenght of your name with method 2 is: " << len1 << " digits" << endl;
    cout << "Lenght of your surname with method 2 is: " << len2 << " digits" << endl;

    reverse(name); /// Reverses the name and surname
    cout << "Your name reversed is: " << name << endl;
    reverse(surName);
    cout << "And your surname reversed is: " << surName << endl;

    if (strcmp(name, surName) == 0) /// Checks if name inputs are equal method 1
    {
        cout << "Names are equal" << endl;
    }
    else
    {
        cout << "Names are not equal" << endl;
    }

    if (mystrcmp(name, surName)) /// Checks if name inputs are equal method 2
    {
        cout << "You imputed the same name twice" << endl;
    }
    else
    {
        cout << "Farewell" << endl;
    }

    reverse(name); /// Revert names back to normal
    reverse(surName);

    strcat(name, surName); /// Adds two strings together
    cout << "Your full name is: " << name << endl;

    cout << "Before copy " << name << " " << surName << endl; /// Copy char array inside another char array
    strncpy(name, surName, strlen(surName) / 2);
    cout << "Partial copy " << name << " " << surName << endl;
    strcpy(name, surName);
    cout << "After copy " << name << " " << surName << endl;

    printallprefixes(name);
    printallsuffixes(name);

    return 0;
}