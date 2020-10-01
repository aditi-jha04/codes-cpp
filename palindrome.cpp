#include <iostream>
#include<math.h>
using namespace std;

 long reverse(long x, int count, long y)
 {
 	int temp;
 	temp = x%10;
 	temp = temp * pow(10,count);
 	y+= temp;
 	count++;
 	if(x/10==0)
 	{
 		return y;
	 }
	else
	reverse(x/10, count, y);
 }

 bool isPalindrome(int x) {
 	long y= (long)x;
 	long w,z=0;
	int count = 0;
	w = reverse(y,count,z);
 	if(w==y)
 	{
 		return true;
	 }
	else if (w!=y)
	{
		return false;
	}
}

int main() {
  cout << "Enter number! \n";
  int x;
  cin>>x;
  bool b3;
  b3 = isPalindrome(x);
   if (b3==true) 
        cout << "\n Yes" << "\n"; 
    else
        cout << "\n No" << "\n";
}
