package algorithm;
import java.util.*;

public class P1302 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		
		int N = s.nextInt();
		
		String[] book = new String[N]; //å ���� ����
		for(int i = 0 ; i < N ; i++) 
			book[i] = "";
		
		int book_num[] = new int[N]; //å �ȸ� �� ����
		for(Integer i : book_num) { //å �ȸ� �� 0���� �ʱ�ȭ
			book_num[i] = 0;
		}
		
		int index = 0;
		
		//å ������ �޴´�.
		for(int i = 0 ; i < N; i++) {
			//å�� �������� �ʴ´ٰ� ����.
			boolean exist = false;
			String str = s.next();
			
			//book�� ���鼭 ���� �̸��� ���� ĭ�� �ִ��� Ȯ��,
			for(int j = 0 ; j < N ; j++) {
				//�̹� ����־��� ���
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
