#include <iostream>

using namespace std;

int stringToInt(const char* str) {
    int result = 0;
    for (int i = 0; str[i] !=NULL; ++i)
        if(isdigit(str[i]))
            result = result * 10 + (str[i] - '0');
    

    return result;
}
int main()
{
    FILE* fptr;
    if (fopen_s(&fptr, "in.txt", "r") != 0)
        return 1;
    char line[200];
    int sum=0;
    while (!feof(fptr)) {
        fgets(line, 200, fptr);
        sum += stringToInt(line);


    }
    cout << sum;
}
