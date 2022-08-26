//Aditya Chanan
//2010993023
//Set 04
//Question 1

#include<iostream>
#include<vector>
using namespace std;

//Function to swap to numbers
void swap(int &a, int &b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

//Function to sort an array using bubble sort
void sort(vector<int> &arr)
{
	for(int i = 0; i < arr.capacity(); i++)
	{
		for(int j = i; j < arr.capacity(); j++)
		{
			if(arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

//Function to get the minimum index of a repeating element
//Works by sifting through a sorted array and checking the adjacent element
int checkFreq(vector<int> sortedArr)
{
	for(int i = 0; i < sortedArr.capacity(); i++)
	{
		//return the index if the adjacent element is the same as the current element
		if(sortedArr[i] == sortedArr[i+1])
		{
			return i;
		}
	}
	
	//return -1 if no repeating elements are found
	return -1;
}


int main()
{
	vector<int> array({5, 6, 3, 4, 3, 6, 4}), arrCopy;
	//Create a copy to retain the original order of the array
	arrCopy = array; 

	sort(array);
	
	int index = checkFreq(array);
	if(index >= 0)
	{
		for(int i = 0; i < arrCopy.capacity(); i++)
		{
			if(array[index] == arrCopy[i])
			{
				cout<<"The minimum index of the repeating element is "<<i;
				break;
			}
		}
			
	}
	
	else
	{
		cout<<"Invalid Input";
			}		
	return 0;
}