import java.util.*;
public class 문제5번{
	public static void main(String[] args)
	{
		int a;
		System.out.println("귓볼을 잡아당겼을 때 아픈가?");
Scanner scan = new Scanner(System.in);
a=scan.nextInt();
if(a==1)
{
	System.out.println("외이도 쪽의 감연인 것 같다.");
	}
 else if(a==0)
 {
	 System.out.println("침을 삼켰을 때 깨끗해지지 않는 것처럼 귀가 막히는 느낌을 받는가?");
	 a=scan.nextInt();
	 if(a==1)
	 {
		 System.out.println("비행기를 탄 이후에 통증이 시작되었는가?");
		 a=scan.nextInt();
		 		if (a==1)
		 		 {
		 			 System.out.println("기압 변화가 내이에 손상을 준 것 같다.");
		 			 }
		 			 else if(a==0)
		 			 {
		 				  System.out.println("지난 몇주동안 청력이 나빠졌는가?");
		 				   a=scan.nextInt();
		 				   if(a==1)
		 				   {
		 					    System.out.println("귀지가 귀를 막고 있는 것 같다.");
		 					   }
		 					  else if(a==0)
		 					  {
		 						   System.out.println("급성 중이염인 것 같다.");
		 						  }
				 }
	 }
	 	 else if(a==0)
	 	 {
	 		  System.out.println("끈적이는 황록색의 분비물이 있는가?");
	 		  a=scan.nextInt();
	 		  if(a==1)
	 		  {
	 			  System.out.println("외이도나 중이 쪽에 감염이 있는 것 같다.");
	 			  }
	 			  else if(a==0)
	 			  {
	 				  System.out.println("감기에 걸렸는가?");
	 				   a=scan.nextInt();
	 				   if(a==1)
	 				   {
	 					   System.out.println("귀앓이는 감기의 일반적인 증상이다.");
	 					   }
	 					   else if(a==0)
	 					   {
	 						   System.out.println("치아나 턱에도 아픔을 느끼는가?");
	 						   a=scan.nextInt();
	 						   if(a==1)
	 						   {
	 							    System.out.println("치아나 잇몸병이 떄로는 귀의 통증으로 느껴질 떄가 있다.-치과의사에게 진찰을 받을 것.");
	 							   }
	 							   else if(a==0)
	 							   {
	 								    System.out.println("진단 결과를 제시할 수 없다.-의사에게 진찰 받을것.");
	 								   }
	 						   }
	 				  }
		 }
	 }

}
}