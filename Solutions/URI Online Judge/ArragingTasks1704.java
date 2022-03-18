import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Scanner;

class Task {
	int time;
	int value;
	
	Task(int time, int value) {
		this.time = time;
		this.value = value;
	}
	
	final static Comparator<Task> ORDER_BY_VALUE_ASC = new Comparator<Task>() {
		@Override
		public int compare(Task task1, Task task2) {
			return task1.value - task2.value;
		}
	};
	
	final static Comparator<Task> ORDER_BY_TIME_ASC_AND_VALUE_DESC = new Comparator<Task>() {
		@Override
		public int compare(Task task1, Task task2) {
			if (task1.time == task2.time) {
				return task2.value - task1.value;
			}
			return task1.time - task2.time;
		}
	};
}

public class ArragingTasks1704 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		while (scanner.hasNext()) {
			List<Task> tasks = new ArrayList<>();
			PriorityQueue<Task> tasksPriorityQueue = new PriorityQueue<>(1000, Task.ORDER_BY_VALUE_ASC);
			
			int n = scanner.nextInt();
			int h = scanner.nextInt();
			
			for (int i = 0; i < n; i++) {
				int value = scanner.nextInt();
				int time = scanner.nextInt();
				
				tasks.add(new Task(time, value));
			}
			
			tasks.sort(Task.ORDER_BY_TIME_ASC_AND_VALUE_DESC);
			
			int now = 1;
			int lostMoney = 0;
			
			for (Task task : tasks) {
				if (now <= task.time && task.time <= h) {
					tasksPriorityQueue.add(task);
					now++;
				} else {
					if (!tasksPriorityQueue.isEmpty()) {
						Task lowerValueTask = tasksPriorityQueue.peek();

						if (lowerValueTask.value < task.value) {
							tasksPriorityQueue.poll();
							tasksPriorityQueue.add(task);
							
							lostMoney += lowerValueTask.value;
							continue;
						}
					}
					
					lostMoney += task.value;
				}
			}
			
			System.out.println(lostMoney);
		}
	}
}

