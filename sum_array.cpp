
/* ARRAY */

#include<iostream>
using namespace std;

int main()
{

	int total=0;
	int sum[6] = {};
	int i,j;	
	
	int a[15][4] = {{1,2},{3,4},{4,5},{5,6},{6,7}} ;	


	cout<<"The Sum of the array : \n ";
	
	for(i=0;i<5;i++)
	{		
		for(j=0;j<2;j++)
		{		
			sum[i]	+= a[i][j];
		}		
		cout<<sum[i]<<endl;	
	total += sum[i] ; 	

	}
	cout<<"total"<<total<<endl;
}


/*Question : Array when declared after initialising gives error*/
/*Answer : you can't do this visit : http://stackoverflow.com/questions/3137671/declaring-and-initializing-arrays-in-c  */

