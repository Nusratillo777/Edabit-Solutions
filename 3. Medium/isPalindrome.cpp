/* Problem-Task : This program checks the string is palindrome or not
 * Problem Link : https://edabit.com/challenge/FSeXe93hxXFyJQpzN
*/
#include <iostream>
#include <locale> 

using namespace std;

int calculateChar(char ch){
    return 'a' <= ch && ch <= 'z' ? ch - 'a' : ch - 'A';
}

bool isPalindrome(std::string str) {
	int sz = str.size();
    int i = 0, j = str.size() - 1;
 	while(i < j){
    	while(!isalpha(str[i]) && i + 1 < sz)
			i ++;
    	while(!isalpha(str[j]) && j - 1 >= 0)
			j --;
     	if(i <= j && calculateChar(str[i]) != calculateChar(str[j]))
			return false;
     	i ++; 
		j --;
 	}
	return true;
}

int main()
{
    cout<<isPalindrome("manam") << '\n';
    cout<<isPalindrome("kayak") << '\n';
    cout<<isPalindrome("mAnam") << '\n';
    cout<<isPalindrome("mAnam1") << '\n';
    return 0;
}
