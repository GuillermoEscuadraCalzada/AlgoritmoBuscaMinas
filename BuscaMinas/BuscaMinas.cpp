#include <iostream>
#include <ctime>
using std::cout;
const int sizeOfArray = 4;
int numberArray[sizeOfArray][sizeOfArray];
void numberOfArray(int x, int y);
void Initialize(int something[sizeOfArray][sizeOfArray]);

int main()
{
	srand(time(nullptr));
	
	
	
	Initialize(numberArray);
	printf("\n");
	numberOfArray( 0, 0);


	printf("\n\t");
	int f = 0;
	while(f != sizeOfArray)
	{
		printf("-----");
		f++;
	}
	printf("\n");
	for(int i = 0; i < sizeOfArray; i++)
	{
		printf("\t| ");
		for(int j = 0; j < sizeOfArray; j++)
		{

			cout <<numberArray[i][j] << " | ";

		}
		printf("\n\t");
		int t = 0;
		while(t != sizeOfArray)
		{
			printf("-----");
			t++;
		}

		printf("\n");
	}
}


void numberOfArray(int x, int y)
{
	if(numberArray[x][y +1] == -1 && numberArray[x][y] != -1 && y != sizeOfArray - 1)
	{
		numberArray[x][y] += 1;
	}
	if(numberArray[x][y-1] == -1 && numberArray[x][y] != -1 && y != 0)
	{
		numberArray[x][y] += 1;
	}
	if(numberArray[x - 1][y] == -1 && numberArray[x][y] != -1)
	{
		numberArray[x][y] += 1;
	}
	if(numberArray[x + 1][y] == -1 && numberArray[x][y] != -1)
	{
		numberArray[x][y] += 1;
	}
	
	if(x < sizeOfArray - 1 || y < sizeOfArray - 1)
	{
		if(y < sizeOfArray -1)
		{
			y++;

		}
		else if(y == sizeOfArray - 1)
		{
			x++;
			y = 0;
		}
		numberOfArray( x, y);
	} 

}

void Initialize(int something[sizeOfArray][sizeOfArray])
{
	printf("\n\t");
	int f = 0;
	while(f != sizeOfArray)
	{
		printf("-----");
		f++;
	}
	printf("\n");

	for(int i = 0; i < sizeOfArray; i++)
	{
		printf("\t| ");

		for(int j = 0; j < sizeOfArray; j++)
		{
			something[i][j] = rand() % 2 + -2;
			if(something[i][j] == -2)
				something[i][j] = 0;

			cout << something[i][j] << " | ";
		
		}
		printf("\n\t");
		int t = 0;
		while(t != sizeOfArray)
		{
			printf("-----");
			t++;
		}

		printf("\n");
	}
	
}
