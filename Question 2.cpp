//Aditya Chanan
//2010993023
//Set 04
//Question 2

#include<iostream>
#include<vector>
using namespace std;

//Function to swap two elements
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



//function to check if all elements are consecutive

bool checkConsec(vector<int> arr)
{
	for(int i = 0; i < arr.capacity()-1; i++)
	{
		if(arr[i+1] - arr[i] != 1)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	vector<int> array({-1, 5, 4, 2, 0, 3, 1});
	sort(array);
	if(chechConsec(array))
	{
		cout<<"The array contains consecutive integers from "<<array[0]<<" to "<< array.back();
	}
	
	else
	{
		cout<<"The array does not contain consecutive integers";
	}
	
	return 0;
}