#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
    
    int num,check,empt,calc,yn,i;
    

        cout << "========== Collatz Conjecture ==========" << endl
             << "Enter a positive integer: ";
        
        cin >> num;

    for(i=1; num >= 1; i++)
    {
    	cout << "[" << i << "]" << setw(5) << num;
    	cout << endl;
    	Sleep(500);
    	
    	if (num == 1)
    	{
    		break;
		}
    	calc = num % 2;
    	
    	if (calc == 0)
		{
    		num = num / 2;
		}
			else
		if (calc == 1)
		{
			num = num * 3 + 1;
		}
		
	}

}
