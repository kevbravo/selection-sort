//we must first include the libraries that are to be used in our program
#include <iostream>
#include <cstdlib>
#include <ctime>

//declaring selection function
void SelectionSort(int *Array, int size);

//main will ask for user defined n and assign array and call selection sort
int main(){

	int n;
	std::cout << "Please enter an integer number of elements you would like to sort" << std::endl;

//store the number the user entered in an integer variable
	std::cin >> n;

	int numArray[n];

//using a random number generator we fill the array with random numbers in a for loop
	srand((unsigned)time(0));

	for(int i = 0; i < n; i++){

		numArray[i] = (rand()%100) + 1;
	}

//we print out the unsorted  elements in the array to the user 
	std::cout << "unsorted array: " << std::endl;

	for(int i = 0; i < n; i++){

//with this for loop I can print out each element
		std::cout << numArray[i] << " ";
	}

	std::cout << std::endl;

//next we call our selection function and  pass the array as a pointer and the integer n
	SelectionSort(numArray, n);
}

//selection sort method does not return a value so we use void
void SelectionSort(int *Array, int size){

//j will iterate until size - 1 to avoid accessing outside of the array
	for(int j = 0; j < size - 1; j++){

//nested for loop used to iterate through array and compare the values next to each other until
//sorted
		int smallest = j;

//this loop will begin at one element to the right of j
		for(int i = j + 1; i < size; i++){

			if(Array[i] < Array[smallest]){

//we store the location of the smallest of the two compared elements into an integer variable
				smallest = i;
			}
		}

//we store the compared values into separate integers, if the smallest is already in the correct
//place it will be the same value
		int x = Array[j];
		int y = Array[smallest];

//then we swap the elements to put them in order
		Array[j] = y;
		Array[smallest] = x;
	}

//lastly we print out the sorted array using a for loop
	std::cout << std::endl;

	std::cout << "sorted array: " << std::endl;

	for(int i = 0; i < size; i++){

		std::cout << Array[i] << " ";
	}

	std::cout << std::endl;
}

