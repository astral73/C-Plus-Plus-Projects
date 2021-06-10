#include <iostream>
#include <string>
using namespace std;

int main()
{
	string myWords[1000];
	int i=0;

//Input Strings

	while (cin >> myWords[i] != NULL)
	{
		i++;
	}
	
	
//Uppercase to Lowercase

	int a, b;
	for (a = 0; a < i; a++)
	{
		for (b = 0; b < myWords[a].length(); b++)
		{
			if (myWords[a][b] <= 'Z' && myWords[a][b] >= 'A')
			{
				myWords[a][b] = myWords[a][b] - 'A' + 'a';
			}
		}
	}


//String Sorting

	int c,d;
	int size=i;
	string temp[1];

	for(c=0;c<size;c++)
	{
		for(d=c;d<size;d++)
		{
			if(myWords[c]>myWords[d])
			{
				temp[0]=myWords[c];
				myWords[c]=myWords[d];
				myWords[d]=temp[0];
			}
		}
	}

//String Occurence Count && Vocabulary Size

	string garb[1];
	garb[0]=myWords[0];
	string garba[1];
	garba[0]=myWords[0];
	int e,f;
	int w=0;
	int count=1;
	int array[1000];
	
	for(f=1;f<i+1;f++)
	{
		if(garba[0]!=myWords[f])
		{			
			w++;
			garba[0]=myWords[f];
		}
	}
	cout<<"Vocabulary Size = "<<w<<endl;

	for(e=1;e<i+1;e++)
	{
		if(garb[0]==myWords[e])
		{
			count++;
		}

		else if(garb[0]!=myWords[e])
		{
			array[e]=count;
			count=1;
			garb[0]=myWords[e];
			cout<<myWords[e-1]<<" "<<array[e]<<endl;
		}
	}			
}
