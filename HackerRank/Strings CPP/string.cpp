#include <iostream>

using namespace std;
int lengthString(string aString);
string addSting(string firstValue,string secondValue);

int main()
{
    string firstString,secondString,sumString,modify,tempString;
    int firstLength,secondLength,total;
    cin>>firstString>>secondString;

    firstLength = lengthString(firstString);
    secondLength= lengthString(secondString);
    cout << firstLength << " " << secondLength<<endl;

    total = firstLength + secondLength;

    sumString = addSting(firstString,secondString);
    tempString =sumString;
    cout<<sumString<<endl;
    char *a =" ";


    char temp = firstString[0];
    char temp2 = secondString[0];
    sumString[0]=temp2;
    sumString[total-secondLength]= *a;
    sumString[total-secondLength+1]=temp ;
    for(int i = total-secondLength+2;i<total;i++){
        sumString[i] =tempString[i-1];
    }
    cout<<sumString<<secondString[secondLength-1];

    return 0;
}
int lengthString(string aString){
    int len = aString.size();
    return len;
}
string addSting(string firstValue,string secondValue){
    string add = firstValue+secondValue;
    return add;
}

