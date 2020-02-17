import java.util.*;

public class BOWLING2{
	
	public static void main(String[] agrs)
	{
		int strike=0;
		int strike2=0;
		int ball1=0;
		int ball2=0;
		int sum=0;

		Scanner input = new Scanner(System.in);
		for(int i=0; i<10; i++)
		{
			System.out.print("Frame "+(i+1) +" - Ball 1 : ");
			ball1=input.nextInt();
			sum+=ball1;
			if(strike!=0)
			{
				sum+=ball1;
				strike--;
				if(strike2!=0)
				{
					sum+=ball1;
					strike2--;
					strike--;
				}
			}

			if(ball1==10)
			{

				if(strike!=0)
				{
					strike2++;
				}

				strike+=2;
			}

			else
				{
				    System.out.print("          Ball 2 : ");
					ball2=input.nextInt();
				    sum+=ball2;
					if(strike!=0)
					{
							sum+=ball2;
							strike--;
					}
					if(ball1+ball2==10)
					{
						strike++;
					}
			}

			if(i==9)
			{
				if(ball1==10)
				{
					System.out.print("Extra-    Ball 1 : ");
					ball1=input.nextInt();
					sum+=ball1;
					System.out.print("Extra-    Ball 2 : ");
					ball2=input.nextInt();
					sum+=ball2;
				}
				else if(ball1+ball2==10)
				{
					 System.out.print("Extra-    Ball 1 : ");
					 ball1=input.nextInt();
					 sum+=ball1;
				}
			}
		}

		System.out.println("ÃÑÁ¡¼ö  " +sum+"Á¡ ");
	}
}
