a[i] = 1;
		}
		for(int i = n - 1; i >= 0; i--)
		{
			if(a[i] == 0)
			{
				a[i] = 1;
				break;
			}
		else
			a[i] = 0;
		}
	
		printf("-");		
	
		for(int i = 0; i < n; i++)
		{
			printf("%d",a[i]);
		}
	}
}
int main() 
{
	int n;
	n = 5;		
	int a[] = {1, 0, 1, 0, 1},
		b[] = {0, 0, 1, 1, 1};
	
	Subtract(n,a,b);
	return 0;
}
