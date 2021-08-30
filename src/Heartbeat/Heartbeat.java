package Heartbeat;

public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int time = 0;
		while(true) {
			try {
				time++;
				Thread.sleep(1000);
				System.out.println(time + " seconds have passed");
			}
			catch(Exception e){
				System.out.println("Caught Exception");
				//Test
				
			}
		}

	}

}
