import java.util.*;

public class message implements Runnable
{
    private String msg;
    private int REPETITIONS = 6;
    private int DELAY = 100;

    public messageRunnable(String message){
        this.message = message;
    }

    public void run(){
        try {
            for(int i = 1; i <= REPETITIONS; i++) {
                Date now = new Date();
                System.out.println(now + ": " + message + "." + i);
                Thread.sleep(DELAY);
            }
        }
        catch (InterruptedException e) {
            System.out.println("Runnable version interrupted.");
        }
    }
}