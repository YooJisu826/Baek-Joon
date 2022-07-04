package algorithm;
import java.util.*;

public class P1302 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		
		int N = s.nextInt();
		
		String[] book = new String[N]; //책 제목 저장
		for(int i = 0 ; i < N ; i++) 
			book[i] = "";
		
		int book_num[] = new int[N]; //책 팔린 수 저장
		for(Integer i : book_num) { //책 팔린 수 0으로 초기화
			book_num[i] = 0;
		}
		
		int index = 0;
		
		//책 제목을 받는다.
		for(int i = 0 ; i < N; i++) {
			//책이 존재하지 않는다고 가정.
			boolean exist = false;
			String str = s.next();
			
			//book을 돌면서 같은 이름을 가진 칸이 있는지 확인,
			for(int j = 0 ; j < N ; j++) {
				//이미 들어있었을 경우
				if(book[j].equals(str)) {
					book_num[j]++;
					exist = true;
				}
			}
			
			if(exist == false) {
				book[index] = str;
				book_num[index]++;
				index++;
			}
			
		}
		
		int largest = 0;
		String st = "";
		for(int i = 0; i <N ; i++) {
			if(largest < book_num[i]) {
				largest = book_num[i];
				st = book[i];
			}
			else if (largest == book_num[i]) {
				if(st.compareTo(book[i]) > 0) {
					largest = book_num[i];
					st = book[i];
				}
			}
		}
		
		System.out.println(st);
	
	}
}
