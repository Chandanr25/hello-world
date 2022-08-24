/*This contains functions for linear search, binary search
 *
 * */

int linear_search(int arr[], int size, int key)
{
	int i = 0;
	int ret = -1;
	for (i = 0; i < size; i++)
	{
		if(key == arr[i])
		{
			ret = i;
			break;
		}	
	}
	return ret;
}
