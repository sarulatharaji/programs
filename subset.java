package sampleprog;
import java.util.*;
public class subset {

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int count=0;
		int k=sc.nextInt();
		int[] arr1=new int[n];
		int arr2[]=new int[k];
		for(int i=0;i<n;i++)
		{
			arr1[i]=sc.nextInt();
		}
		for(int j=0;j<k;j++)
		{
			arr2[j]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
				if(arr1[i]==arr2[j])
					 count++;
			}
		}
		
				if(count==k)
				{
					System.out.println("arr1 is a subset of arr2");
		       }
				else
				{
					System.out.println("arr1 is a subset of arr2");
				}
	}

}
