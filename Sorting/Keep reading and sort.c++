/* sorting example */
#include <iostream>
using namespace std;

bool isSwap( string str1, string str2, int i)
{
    if(str1[i] > str2[i])
        return true;
    if(str1[i] == str2[i])
        return isSwap(str1,str2,i+1); 
    return false;
}

int main()
{   
    string str[7] = {"you","your","must","mike", "jack", "jesus","god"};
    int strlen = 7;
    string temp;
    int i = 0;
    int j = 0;
    bool changed = false;
    while(i < strlen-1)
    {
        changed = false;
        j = i+1;
        while(j < strlen)
        {
            if(isSwap(str[i],str[j],0))
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                changed = true;
            }
            j++;
        }
        if(changed)
            i = 0;
        else
            i++;       
    }
    for(i = 0; i < strlen; i++)
        cout << str[i] << endl;
    return 0;