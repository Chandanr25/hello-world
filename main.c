#include <stdio.h>
#include "hello_world.h"
#include "search.h"

void execute_tests(int test_id)
{
	int arr[] = {64, 21, 13, 52, 9, 81};
	int size_of_arr = sizeof(arr)/ sizeof(arr[0]);
	int result = 0; 
	switch(test_id)
	{
		case 1 : print_hello_world();
			 break;

		case 2 : result = linear_search(arr, size_of_arr, 13);
			 printf("The element is found in position %d\n",result);
			 break;

		default : printf("Wrong test case id\n");
			  break;
			 
	}
	
}

int main()
{
	int test_case_number = 0;
	printf("Select the test case numbers in the following list\n");
	printf("print Hello World : 1\n");
	printf("linear search : 2\n");
	scanf("%d",&test_case_number);

	execute_tests(test_case_number);
	return 0;
}
