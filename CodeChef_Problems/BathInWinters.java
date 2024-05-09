// problem link
// https://www.codechef.com/problems/BATH


import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while(t-- > 0){
		    int x, y;
		    x = sc.nextInt();
		    y = sc.nextInt();

		    y *= 2;

		    System.out.println(x/y);
		}

	}
}
