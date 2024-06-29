class OddThread extends Thread {
    
    public void run() {
        
            try {
                
            
                for (int i = 1; i <= 20; i += 2) {
                    System.out.println("Odd: " + i);
                }
            }
                 catch (Exception i) {
            }
                
    }
    }


class EvenThread extends Thread {
    
    public void run() {
        for (int i = 2; i <= 20; i += 2) {
            System.out.println("Even: " + i);
        }
    }
}

public class extending_thread {
    public static void main(String[] args) {
        // Create instances of OddThread and EvenThread
        OddThread oddThread = new OddThread();
        EvenThread evenThread = new EvenThread();

        // Start the threads
        oddThread.start();
        evenThread.start();

        // Wait for both threads to finish

        System.out.println("Done");
    }
}

