package first;
import java.util.*;
public class baek1181 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		
		String[] name=new String[num];
		for(int i=0;i<num;i++) {
			name[i]=sc.next();			
		}
		Arrays.parallelSort(name);
		ArrayList<String> total=new ArrayList<String>();
		for(String eachName:name) {
			if(!total.contains(eachName)) {
				total.add(eachName);
				System.out.println(eachName);
				}
			}
		}
	}
