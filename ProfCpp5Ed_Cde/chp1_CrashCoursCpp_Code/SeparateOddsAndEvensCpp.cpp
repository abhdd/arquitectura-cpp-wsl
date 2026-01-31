//Separate Odds and Evens.cpp
#include <iostream>

using std::cout;


void PrintArray(int array[], size_t size)
{
	int i {0};

    for (;i<size;i++ )
    {
    	cout << array[i] <<", " ;
    }
    cout << std::endl;
	return;
}

int main()
{
   int Array[] {0,1,2,3,4,5,6,7,8,9,10};

    cout <<"Hello World Separate Odds and Evens Example "<<std::endl;
	PrintArray(Array,std::size(Array));
    
    return 0;
}


