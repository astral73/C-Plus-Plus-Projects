#include <iostream>

using namespace std;

int main()
{
	int hei,wid;
	cin>>hei>>wid;
	char field[wid][hei];
	
	int s,j;
	for(s=0;s<hei;s++)
	{
		for(j=0;j<wid;j++)
		{
			cin>>field[j][s];
		}
	}

	char input[140];
	int a=0;
	
	while(cin>>input[a])
	{
		a++;
	}

	int i;
	int r;
	int height,width;
	for(i=0;input[i]!='\0';i++)
	{
		
		if(input[i]=='I')
		{
			i=i+2;
			height=(input[i]-'0')-1;
			i=i+2;
			width=(input[i]-'0')-1;
		}

		if(width<wid && wid>=0 && height<hei && height>=0)
		{
			if(input[i]=='U')
			{
				if(field[width][height]!='X')
				{
					if(field[width][height-1]=='X')
					{
						field[width][height-1]=field[width][height];
						height--;
					}
				}
			}	

			if(input[i]=='D')
			{
				if(field[width][height]!='X')
				{
					if(field[width][height+1]=='X')
					{
						field[width][height+1]=field[width][height];
						height++;
					}
				}
			}

			if(input[i]=='R')
			{
				if(field[width][height]!='X')
				{
					if(field[width+1][height]=='X')
					{
						field[width+1][height]=field[width][height];
						width++;
					}

					
				}
			}

			if(input[i]=='L')
			{
				if(field[width][height]!='X')
				{
					if(field[width-1][height]=='X')
					{
						field[width-1][height]=field[width][height];
						width--;
					}
				}
			}
		}

		if(input[i]=='P')
			{
				int s,r;
				for(s=0;s<hei;s++)
				{
					for(r=0;r<wid;r++)
					{
						cout<<field[r][s];
					}
					cout<<endl;
				}
				cout<<"---"<<endl;
			}

			if(input[i]=='Q')
			{
				int y,l;
				cout<<"Game over!!!"<<endl;
				for(y=0;y<hei;y++)
				{
					for(l=0;l<wid;l++)
					{
						cout<<field[l][y];
					}			
					cout<<endl;
				}
				cout<<"---";
				break;
			}

		if(input[i+1]=='\0')
		{
			int y,l;
			cout<<"Game over!!!"<<endl;
			for(y=0;y<hei;y++)
			{
				for(l=0;l<wid;l++)
				{
					cout<<field[l][y];
				}			
				cout<<endl;
			}
			cout<<"---";
		}
	}
}
