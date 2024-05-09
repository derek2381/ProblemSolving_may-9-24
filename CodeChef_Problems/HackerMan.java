// problem link
// https://www.codechef.com/problems/PRIMEDICE


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
		    int a, b;
		    a = sc.nextInt();
		    b = sc.nextInt();

		    a = a+b;

		    int count = 0;
		    for(int i = 2;i <= (a / 2);i++){
		        if(a%i == 0){
		            count++;
		        }
		        if(count > 0){
		            break;
		        }
		    }

		    if(count == 1){
		        System.out.println("Bob");
		    }else{
		        System.out.println("Alice");
		    }
		}

	}
}
